/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:54:03 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/11 17:00:38 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\n---------- EX00 First Test ----------\n" << std::endl;
	try
    {
        Bureaucrat bur_ex("Bureaucrat1", 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bur_ex("Bureaucrat2", 150);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	std::cout << "\n---------- EX00 Second Test ----------\n" << std::endl;
	try
    {
        Bureaucrat bur_ex("Bureaucrat3", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bur_ex("Bureaucrat4", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bur_ex("Bureaucrat5", 1);
        bur_ex.becomeSmarter();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bur_ex("Bureaucrat6", 150);
        bur_ex.becomeDumber();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "-------- << Operator check -------" << std::endl;
    Bureaucrat hanz("hanz", 50);
    std::cout << hanz << std::endl;
    std::cout << "hello world" << std::endl;
}