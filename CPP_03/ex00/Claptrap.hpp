/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:24:23 by jdavis            #+#    #+#             */
/*   Updated: 2022/11/04 15:52:50 by jdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	std::string name;
	int			hp;
	int			ep;
	int			ad;
	public:
	ClapTrap(std::string str);
	ClapTrap(const ClapTrap &a);
	ClapTrap & operator = (const ClapTrap &a);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void cost(void);
	int possible();
};

#endif