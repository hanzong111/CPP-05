/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:00:23 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/14 17:31:58 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "Null";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src)
{
	*this = src;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	AForm::operator=(src);
	this->_target = src._target;
	return (*this);
}

void	RobotomyRequestForm::performAction() const
{
	std::cout << "* RAtatataRAtaarrataararatataaa... *" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << this->_target << "'s robotomy was successful!" << std::endl;
	else
		std::cout << this->_target << "'s robotomy has failed..." << std::endl;
}
