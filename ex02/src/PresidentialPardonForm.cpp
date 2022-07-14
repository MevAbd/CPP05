/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:56:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 13:21:08 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "PresidentialPardonForm.class.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Shrubbery", 25, 5), _target("No_Name")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm(target, 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : AForm(rhs.getName(), rhs.getGradeSign(), rhs.getGradeEx()), _target(rhs._target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->AForm::beExecuted(executor);
	std::cout << this->_target << " was forgiven by  Zaphod Beeblebrox." << std::endl;
}
