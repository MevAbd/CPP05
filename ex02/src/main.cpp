/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:58:54 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 13:11:34 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"

void	instantiate(void)
{
	ShrubberyCreationForm	A("lala");
	std::cout << std::endl;
	ShrubberyCreationForm	B;
	std::cout << std::endl;
	ShrubberyCreationForm	C(A);

	std::cout << std::endl;
	std::cout << A << std::endl;
	std::cout << std::endl;
	std::cout << B << std::endl;
	std::cout << std::endl;
	std::cout << C << std::endl;
	std::cout << std::endl;
}

void	canEx(void)
{
	Bureaucrat				exe("execute", 137);
	std::cout << std::endl;
	ShrubberyCreationForm	A("lala");

	std::cout << std::endl;
	std::cout << A << std::endl;
	A.beSigned(exe);
	std::cout << std::endl;
	std::cout << A << std::endl;
	A.execute(exe);
}

void	cantEx(void)
{
	Bureaucrat				exe("execute", 149);
	std::cout << std::endl;
	ShrubberyCreationForm	A("lala");

	std::cout << std::endl;
	std::cout << A << std::endl;
	A.beSigned(exe);
	std::cout << std::endl;
	std::cout << A << std::endl;
	A.execute(exe);
}

void	RobotCanEx(void)
{
	Bureaucrat				exe("execute", 30);
	std::cout << std::endl;
	RobotomyRequestForm	A("lala");

	std::cout << std::endl;
	std::cout << A << std::endl;
	A.beSigned(exe);
	std::cout << std::endl;
	std::cout << A << std::endl;
	std::cout << "********************************************RESULT OF RAND**********************************" << std::endl;
	A.execute(exe);
}

void	RobotCantEx(void)
{
	Bureaucrat				exe("execute", 149);
	std::cout << std::endl;
	RobotomyRequestForm	A("lala");

	std::cout << std::endl;
	std::cout << A << std::endl;
	A.beSigned(exe);
	std::cout << std::endl;
	std::cout << A << std::endl;
	A.execute(exe);
}

int	main(void)
{
	std::cout << "-----------------------------TEST NORMAUX TOUT FONCTIONNE-----------------------------" << std::endl;
	try
	{
		instantiate();	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------SHRUBBERY PEUT EXECUTER-------------------------------------" << std::endl;
	try
	{
		canEx();	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------SHRUBBERY NE PEUT PAS EXECUTER-------------------------------------" << std::endl;
	try
	{
		cantEx();	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------ROBOT NE PEUT PAS EXECUTER-------------------------------------" << std::endl;
	try
	{
		RobotCantEx();	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << "-------------------------------ROBOT PEUT EXECUTER-------------------------------------" << std::endl;
		try
		{
			RobotCanEx();	
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
