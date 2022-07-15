/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:38:31 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/15 10:07:03 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

# include "AForm.class.hpp"
# include "ShrubberyCreationForm.class.hpp"
# include "RobotomyRequestForm.class.hpp"
# include "PresidentialPardonForm.class.hpp"

class AForm;

class Intern
{
	public :
			Intern(void);
			Intern(const Intern &intern);
			virtual ~Intern();

			Intern	&operator=(const Intern &rhs);

			AForm	*makeForm(const std::string name, const std::string target) const;
};

typedef AForm *(*ptr)(const std::string target);

#endif
