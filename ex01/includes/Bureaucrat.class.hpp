/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:48:50 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 07:45:54 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <exception>
# include "Form.class.hpp"

class Form ;

class Bureaucrat
{
	private :
				const std::string	_name;
				int					_grade;
	public :
				Bureaucrat(void);
				Bureaucrat(int);
				Bureaucrat(const std::string &name, int grade);
				Bureaucrat(const Bureaucrat &rhs);
				virtual ~Bureaucrat(void);

				Bureaucrat	&operator=(const Bureaucrat &rhs);

				void		upGrade(void);
				void		downGrade(void);
				void		signForm(Form &rhs) const;

				int			getGrade(void) const;

				std::string	getName(void) const;

				class GradeTooHighException : public std::exception
				{
					const char *what() const throw() {return "Bureaucrat : Grade is too high !!";}
				};
				class GradeTooLowException : public std::exception
				{
					const char *what() const throw() {return "Bureaucrat : Grade is too low !!";}
				};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
