/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:05:56 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/17 20:51:59 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern	&Intern::operator=(const Intern &src)
{
	(void)src;
	return (*this);
}

AForm	*Intern::makeForm(const std::string name, const std::string target)
{
	const std::string	availableName[3]
		= {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	AForm				*availableForm[3]
		= {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	AForm				*selectedForm;

	selectedForm = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (name == availableName[i])
		{
			std::cout << "Intern creates " << name << "Form" << std::endl;
			selectedForm = availableForm[i];
		}
		else
			delete (availableForm[i]);
	}
	if (selectedForm == NULL)
		throw Intern::InvalidName();
	return (selectedForm);
}

const char	*Intern::InvalidName::what() const throw()
{
	return ("(Intern) Invalid form name :(");
}