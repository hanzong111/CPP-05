/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:59:48 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/17 20:54:19 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat	bureaucrat("Bureaucrat", 1);
		Intern 		intern;
		AForm		*form;

		std::cout << "\n---------- EX03 Shrubbery Test ----------\n" << std::endl;
		form = intern.makeForm("ShrubberyCreation", "Home");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

		std::cout << "\n---------- EX03 Robotomy Test ----------\n" << std::endl;
		form = intern.makeForm("RobotomyRequest", "Ricky");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

		std::cout << "\n---------- EX03 Presidential Test ----------\n" << std::endl;
		form = intern.makeForm("PresidentialPardon", "Ivan");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;

		std::cout << "\n---------- EX03 Invalid Test ----------\n" << std::endl;
		form = intern.makeForm("Invalid", "Dummy");
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
