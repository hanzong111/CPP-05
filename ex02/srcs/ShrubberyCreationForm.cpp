/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:00:37 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/14 17:27:40 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreation", 145, 137)
{
	this->_target = "Null";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src)
{
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreation", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	AForm::operator=(src);
	this->_target = src._target;
	return (*this);
}

void	ShrubberyCreationForm::performAction() const
{
	std::ofstream	out_file(this->_target + "_shrubbery");

	out_file << "NANI: " << std::endl;
	out_file << "			(>^.^)>			" << std::endl;
	out_file << "		(>^.^)>		(>^.^)>" << std::endl;                
	out_file << "(>^.^)> (>^.^)> (>^.^)> (>^.^)> (>^.^)>" << std::endl; 
	out_file << "(>^.^)>(>^.^)>(>^.^)>(>^.^)>(>^.^)>(>^.^)>(>^.^)>" << std::endl;
	out_file << std::endl;
}
