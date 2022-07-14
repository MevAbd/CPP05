/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:35:48 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 13:04:11 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

# include "Bureaucrat.class.hpp"
# include "AForm.class.hpp"
# include <cstdlib>
class RobotomyRequestForm : public AForm
{
	private :
				const std::string	_target;
	public :
				RobotomyRequestForm(void);
				RobotomyRequestForm(const std::string target);
				RobotomyRequestForm(const RobotomyRequestForm &rhs);
				virtual ~RobotomyRequestForm();

				RobotomyRequestForm	&operator=(const RobotomyRequestForm &shrubberyForm);

				virtual void 			execute(Bureaucrat const &executor)const;
};

#endif
