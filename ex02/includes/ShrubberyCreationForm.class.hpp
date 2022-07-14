/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:35:48 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/14 11:32:17 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

# include "Bureaucrat.class.hpp"
# include "AForm.class.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	private :
				const std::string	_target;
	public :
				ShrubberyCreationForm(void);
				ShrubberyCreationForm(const std::string target);
				ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
				virtual ~ShrubberyCreationForm();

				ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &shrubberyForm);

				virtual void 			execute(Bureaucrat const &executor)const;
};

#endif
