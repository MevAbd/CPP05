/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:58:54 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 07:53:56 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

void	instantiate(void)
{
	const Bureaucrat	bur("lala", 75);
	const Bureaucrat	burbur("bis", 126);
	std::cout << std::endl;

	Form		form_a;
	std::cout << std::endl;
	Form		form_b("permis", 10, 90);
	std::cout << std::endl;
	Form		form_c(form_b);
	std::cout << std::endl;

	std::cout << "A name = " << form_a.getName() << std::endl;
	std::cout << "A grade sign  = " << form_a.getGradeSign() << std::endl;
	std::cout << "A grade ex  = " << form_a.getGradeEx() << std::endl;
	std::cout << "A signed  = " << form_a.getSigned() << std::endl;
	std::cout << std::endl;

	std::cout << "B name = " << form_b.getName() << std::endl;
	std::cout << "B grade sign  = " << form_b.getGradeSign() << std::endl;
	std::cout << "B grade ex  = " << form_b.getGradeEx() << std::endl;
	std::cout << "B signed  = " << form_b.getSigned() << std::endl;
	std::cout << std::endl;
}

void	besigned_ok(void)
{
	const Bureaucrat	bur("lala", 75);
	Form		form_a;

	std::cout << "A signed  = " << form_a.getSigned() << std::endl;
	form_a.beSigned(bur);
	std::cout << "A signed  = " << form_a.getSigned() << std::endl;
	std::cout << std::endl;
}

void	besigned_nop(void)
{
	const Bureaucrat	burbur("bis", 126);
	Form		form_a;

	std::cout << "A signed  = " << form_a.getSigned() << std::endl;
	form_a.beSigned(burbur);
	std::cout << "A signed  = " << form_a.getSigned() << std::endl;
	std::cout << std::endl;
}

void	signForm_ok(void)
{
	const Bureaucrat	bur("lala", 75);
	Form		form_a;

	std::cout << "A signed  = " << form_a.getSigned() << std::endl;
	bur.signForm(form_a);
	std::cout << "A signed  = " << form_a.getSigned() << std::endl;
	std::cout << std::endl;
}

void	signForm_nop(void)
{
	const Bureaucrat	burbur("bis", 126);
	Form		form_a;

	std::cout << "A signed  = " << form_a.getSigned() << std::endl;
	burbur.signForm(form_a);
	std::cout << "A signed  = " << form_a.getSigned() << std::endl;
	std::cout << std::endl;
}

void	gradeSignHigh(void)
{
	Form	form("Form", 0, 75);
}

void	gradeSignLow(void)
{
	Form	form("Form", 151, 75);
}

void	gradeExHigh(void)
{
	Form	form("Form", 75, 0);
}

void	gradeExLow(void)
{
	Form	form("Form", 75, 151);
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
	std::cout << std::endl;
	std::cout << "------------------------------Le Bureaucrat peut signer-------------------------------------" << std::endl;
	try
	{
		besigned_ok();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------------------------Le Bureaucrat ne peut pas signer--------------------------------" << std::endl;
	try
	{
		besigned_nop();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------------------------Le Bureaucrat peut signer--------------------------------" << std::endl;
	try
	{
		signForm_ok();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------------------------Le Bureaucrat ne peut pas signer--------------------------------" << std::endl;
	try
	{
		signForm_nop();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------------------------Grade de signature trop haut--------------------------------" << std::endl;
	try
	{
		gradeSignHigh();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------------------------Grade de signature trop bas--------------------------------" << std::endl;
	try
	{
		gradeSignLow();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------------------------Grade d'execution trop haut--------------------------------" << std::endl;
	try
	{
		gradeExHigh();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------------------------Grade d'execution trop bas--------------------------------" << std::endl;
	try
	{
		gradeExLow();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
