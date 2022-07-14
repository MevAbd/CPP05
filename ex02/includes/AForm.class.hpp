/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:24:01 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 12:59:38 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_CLASS_HPP
# define AFORM_CLASS_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.class.hpp"

class Bureaucrat ;

class AForm
{
	private :
				const std::string	_name;
				bool				_signed;
				const int			_g_sign;
				const int			_g_ex;
	public :
				AForm(void);
				AForm(const std::string &name, int g_sign, int g_ex);
				AForm(const AForm &rhs);
				virtual ~AForm(void);

				AForm	&operator=(const AForm &rhs);

				void			beSigned(const Bureaucrat &bur);
				void			beExecuted(const Bureaucrat &bur) const;
				virtual void	execute(Bureaucrat const & executor) const = 0;

				int				getGradeSign(void) const;
				int				getGradeEx(void) const;

				bool			getSigned(void) const;

				std::string		getName(void) const;


				class GradeTooHighException : public std::exception
				{
					const char *what() const throw() {return "AForm : Grade is too high !!";}
				};
				class GradeTooLowException : public std::exception
				{
					const char *what() const throw() {return "AForm : Grade is too low !!";}
				};
				class NotSigned : public std::exception
				{
					const char *what() const throw() {return "AForm : Form isnt signed";}
				};
				//class FailRobotExeption() : public std::exception
			//	{
		//			const char *what() const throw() {return "FAIL robotization";}
	//			};
};

std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif
