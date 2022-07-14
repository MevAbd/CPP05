/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:56:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 13:14:07 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "RobotomyRequestForm.class.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Shrubbery", 72, 45), _target("No_Name")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm(target, 75, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : AForm(rhs.getName(), rhs.getGradeSign(), rhs.getGradeEx()), _target(rhs._target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->AForm::beExecuted(executor);
	std::cout << "Sounds of a drill" << std::endl;
	int pickedChois = (int)(rand() % 2);
	if (pickedChois)
		std::cout << "Succed "<< this->_target << " has been robotized" << std::endl;
	else
		std::cout << "FAIL " << this->_target << "ROBOTIZATION !!" << std::endl;
}
