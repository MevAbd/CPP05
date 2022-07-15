/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:58:24 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/15 11:18:09 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(const Intern &rhs)
{
	*this = rhs;
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

int		getNbForm(const std::string name)
{
	int	ret = -1;
	std::string	toCmp[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (name == toCmp[i])
			ret = i;
	}
	return (ret);
}

AForm	*Shrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Robot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Presidential(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

const std::string	lowStr(const std::string str)
{
	std::string	ret;

	for (unsigned long i = 0; i < str.size(); i++)
		ret += tolower(str[i]);
	return (ret);
}

AForm	*Intern::makeForm(const std::string name, const std::string target) const
{
	ptr		form[3] = {&Shrubbery, &Robot, &Presidential};
	AForm	*formPtr = NULL; 
	int		nbForm = getNbForm(lowStr(name));

	if (nbForm >= 0)
	{
		formPtr = form[nbForm](target);
		std::cout << "Intern creates " << formPtr->getName() << std::endl;
	}
	else
		std::cout << "Sorry we cant create " << name << std::endl;
	return (formPtr);
}
