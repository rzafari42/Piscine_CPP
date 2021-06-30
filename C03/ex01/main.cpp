/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:10:57 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 17:01:10 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap Clap("James");
	ScavTrap Scav("Harry");

	Clap.attack("victim");
	Clap.takeDamage(6);
	Clap.beRepaired(8);

	Scav.guardGate();


	return 0;
}