/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:59:48 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/14 14:23:25 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/* ShrubberyCreationForm: Sign: 145, Execute: 137
** RobotomyRequestForm: Sign 72, Execute: 45
** PresidentialPardonForm: Sign 25, Execute: 5 */
int main()
{
	Bureaucrat				dumbBureaucrat("Dumb", 150);
	Bureaucrat				averageBureaucrat("Average", 70);
	Bureaucrat				aboveAverageBureaucrat("AboveAverage", 30);
	Bureaucrat				smartBureaucrat("Smart", 1);
	ShrubberyCreationForm	shrubbery("Home");
	RobotomyRequestForm 	robotomy("Ricky");
	PresidentialPardonForm	presidential("Ivan");

	std::cout << "\n---------- EX02 Shrubbery Test ----------\n" << std::endl;
	dumbBureaucrat.signForm(shrubbery);
	dumbBureaucrat.executeForm(shrubbery);
	averageBureaucrat.signForm(shrubbery);
	averageBureaucrat.executeForm(shrubbery);
	aboveAverageBureaucrat.signForm(shrubbery);
	aboveAverageBureaucrat.executeForm(shrubbery);
	smartBureaucrat.signForm(shrubbery);
	smartBureaucrat.executeForm(shrubbery);

	std::cout << "\n---------- EX02 Robotomy Test ----------\n" << std::endl;
	dumbBureaucrat.signForm(robotomy);
	dumbBureaucrat.executeForm(robotomy);
	averageBureaucrat.signForm(robotomy);
	averageBureaucrat.executeForm(robotomy);
	aboveAverageBureaucrat.signForm(robotomy);
	aboveAverageBureaucrat.executeForm(robotomy);
	smartBureaucrat.signForm(robotomy);
	smartBureaucrat.executeForm(robotomy);

	std::cout << "\n---------- EX02 Presidential Test ----------\n" << std::endl;
	dumbBureaucrat.signForm(presidential);
	dumbBureaucrat.executeForm(presidential);
	averageBureaucrat.signForm(presidential);
	averageBureaucrat.executeForm(presidential);
	aboveAverageBureaucrat.signForm(presidential);
	aboveAverageBureaucrat.executeForm(presidential);
	smartBureaucrat.signForm(presidential);
	smartBureaucrat.executeForm(presidential);

	return (0);
}
