/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:59:20 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/14 14:23:48 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		/* Orthrodox canonical form */
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();
		Bureaucrat			&operator=(const Bureaucrat &src);
		
		/* Member functions */
		const std::string	getName() const;
		int					getGrade() const;
		void				becomeSmarter();
		void				becomeDumber();
		void				signForm(AForm &form);
		void				executeForm(const AForm &form) const;

		/* Exception classes */
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
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream				&operator<<(std::ostream &output , Bureaucrat &src);

#endif
