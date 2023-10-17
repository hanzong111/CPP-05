/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:59:31 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/14 13:59:35 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* Default Constructor */
AForm::AForm() : _name("Null"), _signGrade(150), _executeGrade(150)
{
	this->_signed = false;
}

/* Copy constructor */
AForm::AForm(const AForm &src) : _name(src._name), _signGrade(src._signGrade), _executeGrade(src._executeGrade)
{
	this->_signed = src._signed;
	*this = src;
}

/* Constructor */
AForm::AForm(const std::string name, int signGrade, int executeGrade) :
	_name(name), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (this->_signGrade < 1 || this->_executeGrade < 1)
		throw AForm::GradeTooHighException();
	if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw AForm::GradeTooLowException();
	this->_signed = false;
}

/* Destructor */
AForm::~AForm()
{
	
}

/* Copy assignation operator  */
AForm	&AForm::operator=(const AForm &src)
{
	this->_signed = src._signed;
	return (*this);
}

const std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

int	AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int	AForm::getExecuteGrade() const
{
	return (this->_executeGrade);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->_executeGrade)
		throw AForm::GradeTooLowException();
	if (this->_signed == false)
		throw AForm::FormNotSigned();
	performAction();
}

/* Exception function for when Grade is too high */
const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("(AForm) Grade Too High lahhhh");
}

/* Exception function for when Grade is too low */
const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("(AForm) Grade Too Low :(");
}

/* Exception function for when the AForm is not signed */
const char	*AForm::FormNotSigned::what() const throw()
{
	return ("(AForm) AFormNotSigned was called");
}

/* Function when << operator is called */
std::ostream	&operator<<(std::ostream &output, const AForm &src)
{
	output << "AForm name: " << src.getName() << std::endl;
	output << "Signed: " << src.getSigned() << std::endl;
	output << "Grade to sign: " << src.getSignGrade() << std::endl;
	output << "Grade to execute: " << src.getExecuteGrade() << std::endl;
	return (output);
}
