/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:42:21 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/13 18:53:26 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

Form::Form(const std::string &name, int sign, int ex) : _name(name), _signed(0), _g_sign(sign), _g_ex(ex)
{
	if (sign < 1 || ex < 1)
		throw Form::GradeTooHighException();
	if (sign > 150 || ex > 150)
		throw Form::GradeTooLowException();
	std::cout << _name << " Form constructor called" << std::endl;
	return ;
}

Form::Form(void) : _name("No_Name"), _signed(0), _g_sign(100), _g_ex(50)
{
	std::cout << _name << " Form constructor called" << std::endl;
	return ;
}

Form::Form(const Form &rhs) : _name("No_Name"), _signed(0), _g_sign(100), _g_ex(50)
{
	*this = rhs;
	std::cout << this->_name << " Form copy constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << this->_name << " Form destructor called" << std::endl;
	return ;
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

int	Form::getGradeSign(void) const
{
	return (this->_g_sign);
}

int	Form::getGradeEx(void) const
{
	return (this->_g_ex);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

void	Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > this->_g_sign)
		throw Form::GradeTooLowException();
	else
		this->_signed = 1;
		
}

std::ostream	&operator<<(std::ostream &o, const Form &form)
{
	o << form.getName() << ", grade to signe : " << form.getGradeSign() << ", grade to execution : " << form.getGradeEx() << ", is signed : " << form.getSigned();
	return (o);
}

Form	&Form::operator=(const Form &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}
