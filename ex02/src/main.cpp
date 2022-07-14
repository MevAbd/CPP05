/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:58:54 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 13:52:41 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"

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

void	PresidCanEx(void)
{
	Bureaucrat				exe("execute", 5);
	std::cout << std::endl;
	PresidentialPardonForm	A("lala");

	std::cout << std::endl;
	std::cout << A << std::endl;
	A.beSigned(exe);
	std::cout << std::endl;
	std::cout << A << std::endl;
	A.execute(exe);
}

void	PresidCantEx(void)
{
	Bureaucrat				exe("execute", 10);
	std::cout << std::endl;
	PresidentialPardonForm	A("lala");

	std::cout << std::endl;
	std::cout << A << std::endl;
	A.beSigned(exe);
	std::cout << std::endl;
	std::cout << A << std::endl;
	A.execute(exe);
}

void	executeFormTest(void)
{
	Bureaucrat	A("Jean De La Compta", 1);
	PresidentialPardonForm	sorry("formulaire d'excuse");

	sorry.beSigned(A);
	A.executeForm(sorry);	
}

void	noExecuteFormTest(void)
{
	Bureaucrat	A("Elise de l'admin", 149);
	PresidentialPardonForm	sorry("formulaire d'excuse");

//	sorry.beSigned(A);
	//A.signAForm(sorry);
	A.executeForm(sorry);
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
	std::cout << "-------------------------------PRESIDENTIAL NE PEUT PAS EXECUTER-------------------------------------" << std::endl;
	try
	{
		PresidCantEx();	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------PRESIDENTIAL PEUT EXECUTER-------------------------------------" << std::endl;
	try
	{
		PresidCanEx();	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------BUREAUCRAT PEUT EXECUTER-------------------------------------" << std::endl;
	try
	{
		executeFormTest();	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------BUREAUCRAT NE PEUT PAS EXECUTER-------------------------------------" << std::endl;
	try
	{
		noExecuteFormTest();	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
