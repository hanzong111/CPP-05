/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:52:17 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/11 16:52:19 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\n---------- EX01 First Test ----------\n" << std::endl;
	Bureaucrat bureaucrat("bureaucrat", 69);
	Form lowForm("lowForm", 100, 100);
	Form highForm("highForm", 30, 30);

	std::cout << lowForm << std::endl;
	std::cout << highForm << std::endl;
	bureaucrat.signForm(lowForm);
	bureaucrat.signForm(highForm);
	return (0);
}
