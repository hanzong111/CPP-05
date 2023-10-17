/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:52:03 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/14 12:04:08 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

/* Default Constructor */
Form::Form() : _name("Null"), _signGrade(150), _executeGrade(150)
{
	this->_signed = false;
}

/* Copy constructor */
Form::Form(const Form &src) : _name(src._name), _signGrade(src._signGrade), _executeGrade(src._executeGrade)
{
	this->_signed = src._signed;
	*this = src;
}

/* Constructor */
Form::Form(const std::string name, int signGrade, int executeGrade) :
	_name(name), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (this->_signGrade < 1 || this->_executeGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw Form::GradeTooLowException();
	this->_signed = false;
}

/* Destructor */
Form::~Form()
{
	
}

/* Copy assignation operator  */
Form	&Form::operator=(const Form &src)
{
	this->_signed = src._signed;
	return (*this);
}

const std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

int	Form::getExecuteGrade() const
{
	return (this->_executeGrade);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

/* Exception function for when Grade is too high */
const char	*Form::GradeTooHighException::what() const throw()
{
	return ("(Form) Grade Too High lahhhh");
}

/* Exception function for when Grade is too low */
const char	*Form::GradeTooLowException::what() const throw()
{
	return ("(Form) Grade Too Low :(");
}

/* Function when << operator is called */
std::ostream	&operator<<(std::ostream &output, const Form &src)
{
	output << "Form name: " << src.getName() << std::endl;
	output << "Signed: " << src.getSigned() << std::endl;
	output << "Grade to sign: " << src.getSignGrade() << std::endl;
	output << "Grade to execute: " << src.getExecuteGrade() << std::endl;
	return (output);
}
