/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:56:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 12:45:44 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery", 145, 137), _target("No_Name")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm(target, 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : AForm(rhs.getName(), rhs.getGradeSign(), rhs.getGradeEx()), _target(rhs._target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	ofs;

	this->AForm::beExecuted(executor);
	ofs.open(((_target + "_shrubbery").c_str()), std::ofstream::out | std::ofstream::app);
	if (!ofs.good())
		ofs.close();
	ofs << "               ,@@@@@@@," << std::endl;
	ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,888888/8o" << std::endl;
	ofs << "   ,%&/%&&%&&%,@@@.@@@/@@@88/88888/88'" << std::endl;
	ofs << "   %&&%&%&/%&&%@@.@@/ /@@@88888.88888'" << std::endl;
	ofs << "   %&&%/ %&%%&&@@. V /@@' `88.8 `/88'" << std::endl;
	ofs << "  `&%/ ` /%&'    |.|         |'|8'" << std::endl;
	ofs << "      |o|        | |         | |" << std::endl;
	ofs << "      |.|        | |         | |" << std::endl;
	ofs << "      |.|        |.|         | |"<< std::endl;
	ofs.close();
}
