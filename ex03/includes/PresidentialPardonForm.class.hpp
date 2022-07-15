/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:35:48 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 13:24:07 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

# include "Bureaucrat.class.hpp"
# include "AForm.class.hpp"
# include <cstdlib>
class PresidentialPardonForm : public AForm
{
	private :
				const std::string	_target;
	public :
				PresidentialPardonForm(void);
				PresidentialPardonForm(const std::string target);
				PresidentialPardonForm(const PresidentialPardonForm &rhs);
				virtual ~PresidentialPardonForm();

				PresidentialPardonForm	&operator=(const PresidentialPardonForm &shrubberyForm);

				virtual void 			execute(Bureaucrat const &executor)const;
};

#endif
