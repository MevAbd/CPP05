/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:58:54 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/15 12:10:46 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "Intern.class.hpp"


int	main(void)
{
		std::cout << "*************************SHRUBBERY CREATION******************" << std::endl;
		Bureaucrat	Bur("Henry", 10);
		Intern	stagiaire;
		AForm	*form;
	
		form = stagiaire.makeForm("shrubbery creation", "jardin");
		Bur.signAForm(*form);
		std::cout << *form << std::endl;
		Bur.executeForm(*form);
	
		std::cout << std::endl << std::endl << std::endl;
		delete form;


		std::cout << "*************************ROBOTOMY******************" << std::endl;
		AForm	*form2;
	
		form2 = stagiaire.makeForm("robotomy request", "lave linge");
		Bur.signAForm(*form2);
		std::cout << *form2 << std::endl;
		Bur.executeForm(*form2);

		std::cout << std::endl << std::endl << std::endl;

		delete form2;

	
		std::cout << "************************PARDON*****************" << std::endl;
		AForm	*form3;

		form3 = stagiaire.makeForm("PRESIDENTIAL pardon", "excuse a mon seigneur");
		Bur.signAForm(*form3);
		std::cout << *form3 << std::endl;
		Bur.executeForm(*form3);

		std::cout << std::endl << std::endl << std::endl;
		delete form3;



		std::cout << "************************FAUX FORMULAIRE*****************" << std::endl;
		AForm	*form4;

		form4 = stagiaire.makeForm("CECI EST FAUX", "jhkljhlh");
		if (form4)
		{
			Bur.signAForm(*form4);
			std::cout << *form4 << std::endl;
			Bur.executeForm(*form4);
		}

		std::cout << std::endl << std::endl << std::endl;
}
