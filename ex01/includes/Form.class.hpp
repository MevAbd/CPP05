/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:24:01 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/13 18:53:28 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.class.hpp"

class Form
{
	private :
				const std::string	_name;
				bool				_signed;
				const int			_g_sign;
				const int			_g_ex;
	public :
				Form(void);
				Form(const std::string &name, int g_sign, int g_ex);
				Form(const Form &rhs);
				virtual ~Form(void);

				Form	&operator=(const Form &rhs);

				void		beSigned(const Bureaucrat &bur);

				int			getGradeSign(void) const;
				int			getGradeEx(void) const;

				bool		getSigned(void) const;

				std::string	getName(void) const;

				class GradeTooHighException : public std::exception
				{
					const char *what() const throw() {return "Grade is too high !!";}
				};
				class GradeTooLowException : public std::exception
				{
					const char *what() const throw() {return "Grade is too low !!";}
				};
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif
