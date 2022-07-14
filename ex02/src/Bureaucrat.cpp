/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:54:19 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 13:53:07 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) 
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
	std::cout << _name << " : bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(void) : _name("No_Name"), _grade(150)
{
	std::cout << _name << " : bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : _name("No_Name")
{
	*this = rhs;
	std::cout << this->_name << " : bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->_name << " : bureaucrat destructor called" << std::endl;
	return ;
}

void	Bureaucrat::upGrade(void)
{
	if (this->_grade > 1)
		this->_grade--;
	else
		std::cout << "You can't up grade " << _name << ", grade is too high." << std::endl;
	return ;
}

void	Bureaucrat::downGrade(void)
{
	if (this->_grade < 150)
		this->_grade++;
	else
		std::cout << "You can't down grade " << _name << ", grade is too low." << std::endl;
	return ;
}

std::string	Bureaucrat::getName(void) const
{
	std::string	ret;

	ret = this->_name;
	return (ret);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::signAForm(AForm &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() <<  " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << _name << " cannot executes " << form.getName() << " because " <<  e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
	o << bureaucrat.getName() << ", grade " << bureaucrat.getGrade();
	return (o);
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}
