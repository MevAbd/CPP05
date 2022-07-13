/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:58:54 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/13 19:01:06 by malbrand         ###   ########.fr       */
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
	

}

void	besigned_ok(void)
{
	const Bureaucrat	bur("lala", 75);
	Form		form_a;

	form_a.beSigned(bur);
	std::cout << "A signed  = " << form_a.getSigned() << std::endl;
	std::cout << std::endl;
}

void	besigned_nop(void)
{
	const Bureaucrat	burbur("bis", 126);
	Form		form_a;

	form_a.beSigned(burbur);
	std::cout << "A signed  = " << form_a.getSigned() << std::endl;
	std::cout << std::endl;
}
/*
void	lessless(void)
{
	Bureaucrat	min("MIN", 146);
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << min << std::endl;
		min.downGrade();
	}
	std::cout << std::endl;
}

void	moreThanMax(void)
{	
	Bureaucrat	maxmax("MAXMAX", -6);
}

void	lessThanMin(void)
{	
	Bureaucrat	minmin("MINMIN", 169);
}
*/

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
/*	try
	{
		moreThanMax();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		lessThanMin();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}*/
	return (0);
}
