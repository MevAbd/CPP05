/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:54:19 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/13 17:05:21 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) 
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
	std::cout << _name << " constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(void) : _name("No_Name"), _grade(150)
{
	std::cout << _name << " constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : _name("No_Name")
{
	*this = rhs;
	std::cout << this->_name << " copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->_name << " destructor called" << std::endl;
	return ;
}

void	Bureaucrat::upGrade(void)
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void	Bureaucrat::downGrade(void)
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
	return ;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
	o << bureaucrat.getName() << ",bureaucrat grade " << bureaucrat.getGrade();
	return (o);
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}
