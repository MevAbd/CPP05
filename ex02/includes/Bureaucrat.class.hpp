/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:48:50 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 13:43:11 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <exception>
# include "AForm.class.hpp"

class AForm ;

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
				void		signAForm(AForm &rhs) const;
				void		executeForm(AForm const &form);

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
