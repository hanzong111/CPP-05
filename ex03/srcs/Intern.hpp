/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:34:42 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/17 20:53:20 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
	public	:
				Intern();
				Intern(const Intern &src);
				Intern	&operator=(const Intern &src);
				~Intern();
				AForm 	*makeForm(const std::string name, const std::string target);

				class InvalidName : public std::exception
				{
					public :
						virtual const char *what() const throw();
				};
};

#endif