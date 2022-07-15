/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:58:54 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/15 21:52:17 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

void	instantiate(void)
{
	Bureaucrat	lala("lala", 6);
	std::cout << std::endl;

	Bureaucrat	test;
	std::cout << std::endl;

	Bureaucrat	lalo(lala);
	std::cout << std::endl;

	std::cout << lala.getName() << std::endl;
	std::cout << lala.getGrade() << std::endl;
	std::cout << test.getName() << std::endl;
	std::cout << test.getGrade() << std::endl;
	std::cout << lalo.getName() << std::endl;
	std::cout << lalo.getGrade() << std::endl;
}

void	moremore(void)
{
	Bureaucrat	max("MAX", 5);
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << max << std::endl;
		max.upGrade();
	}
	std::cout << std::endl;
}

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
int	main(void)
{
	std::cout << "****************************************SIMPLE TEST****************************************" << std::endl;
	try
	{
		instantiate();	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "********************************************GRADE INCREMENTATION************************************" << std::endl;
	try
	{
		moremore();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "********************************************GRADE DECREMENTATION************************************" << std::endl;
	try
	{
		lessless();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "********************************************MORE THAN MAX************************************" << std::endl;
	try
	{
		moreThanMax();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "********************************************LESS THAN MAX************************************" << std::endl;
	try
	{
		lessThanMin();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
