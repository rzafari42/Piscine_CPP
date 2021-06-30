/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:10:57 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 20:36:38 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{

	ClapTrap Clap("James");

	Clap.attack("victim");
	Clap.takeDamage(6);
	Clap.beRepaired(8);

	std::cout << "\n\n" << std::endl;

	ScavTrap Scav("Harry");

	Scav.attack("victim");
	Scav.takeDamage(6);
	Scav.beRepaired(8);
	Scav.guardGate();


	std::cout << "\n\n" << std::endl;

	FragTrap Frag("Liane");

	Frag.attack("victim");
	Frag.takeDamage(6);
	Frag.beRepaired(8);
	Frag.highFivesGuys();

	std::cout << "\n\n" << std::endl;

	DiamondTrap Diamond("James");

	Diamond.attack("victim");
	Diamond.takeDamage(6);
	Diamond.beRepaired(8);
	Diamond.guardGate();
	Diamond.highFivesGuys();
	Diamond.whoAmI();

	std::cout << "\n\n" << std::endl;

	return 0;
}