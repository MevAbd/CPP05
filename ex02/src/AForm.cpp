/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:42:21 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 10:25:13 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.class.hpp"

AForm::AForm(const std::string &name, int sign, int ex) : _name(name), _signed(0), _g_sign(sign), _g_ex(ex)
{
	if (sign < 1 || ex < 1)
		throw AForm::GradeTooHighException();
	if (sign > 150 || ex > 150)
		throw AForm::GradeTooLowException();
	std::cout << _name << " AForm constructor called" << std::endl;
	return ;
}

AForm::AForm(void) : _name("No_Name"), _signed(0), _g_sign(100), _g_ex(50)
{
	std::cout << _name << " AForm constructor called" << std::endl;
	return ;
}

AForm::AForm(const AForm &rhs) : _name("No_Name"), _signed(0), _g_sign(100), _g_ex(50)
{
	*this = rhs;
	std::cout << this->_name << " AForm copy constructor called" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << this->_name << " AForm destructor called" << std::endl;
	return ;
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

int	AForm::getGradeSign(void) const
{
	return (this->_g_sign);
}

int	AForm::getGradeEx(void) const
{
	return (this->_g_ex);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

void	AForm::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > this->_g_sign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = 1;
}

void	AForm::beExecuted(const Bureaucrat &bur) const
{
	if (!this->getSigned())
		throw AForm::NotSigned();
	if (bur.getGrade() > this->_g_ex)
		throw AForm::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &o, const AForm &form)
{
	o << form.getName() << ", grade to signe : " << form.getGradeSign() << ", grade to execution : " << form.getGradeEx() << ", is signed : " << form.getSigned();
	return (o);
}

AForm	&AForm::operator=(const AForm &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}
