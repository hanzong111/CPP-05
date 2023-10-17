/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:57:09 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/14 12:08:05 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public	:
				/*OCF*/
				Bureaucrat();
				Bureaucrat(const std::string name, int grade);
				~Bureaucrat();
				Bureaucrat(const Bureaucrat &ref);
				Bureaucrat	&operator=(const Bureaucrat &src);

				/*Getters*/
				const std::string	getName() const;
				int					getGrade() const;
				void				becomeSmarter();
				void				becomeDumber();
				void				signForm(Form &form);

				/*Exception Classes*/
				class GradeTooHighException : public std::exception
				{
					public:
						virtual const char	*what() const throw();
				};

				class GradeTooLowException : public std::exception
				{
					public:
						virtual const char	*what() const throw();
				};
	private :
				const std::string	_name;
				int					_grade;
};

std::ostream				&operator<<(std::ostream &output , Bureaucrat &src);

#endif
