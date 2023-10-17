/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:08:47 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/11 16:57:18 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

/*Default Constructor*/
Bureaucrat::Bureaucrat() : _name("NULL")
{
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) : _name(ref._name)
{
	this->_grade = ref._grade;
	*this = ref;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src._grade;
	return (*this);
}

/* Destructor*/
Bureaucrat::~Bureaucrat()
{

}

const std::string	Bureaucrat::getName()
{
	return (this->_name);
}

int	Bureaucrat::getGrade()
{
	return (this->_grade);
}

void	Bureaucrat::becomeSmarter()
{
	try
	{
		if (this->_grade <= 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << std::endl;
	}
	this->_grade--;
}

void	Bureaucrat::becomeDumber()
{
	try
	{
		if (this->_grade >= 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what() << std::endl;
	}
	this->_grade++;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("(Bureaucrat) Grade is Too High ");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("(Bureaucrat) Grade is Too Low ");
}

std::ostream	&operator<<(std::ostream &output, Bureaucrat &src)
{
	output << "Bureaucrat name: " << src.getName() << std::endl;
	output << "Grade : " << src.getGrade() << std::endl;
	return (output);
}