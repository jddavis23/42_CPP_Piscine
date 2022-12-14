/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeffdavis <jeffdavis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:25:09 by jdavis            #+#    #+#             */
/*   Updated: 2023/01/10 14:36:12 by jeffdavis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	first("jeff", 2);
	std::cout << first << std::endl;
	PresidentialPardonForm tip("eps");
	tip.beSigned(first);
	first.executeForm(tip);
	std::cout << tip.getSign() << std::endl;
//	Bureaucrat	second("school", 0);
//	first.incGrade();
//	first.incGrade();
	return (0);
};
