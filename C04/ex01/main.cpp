/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:35 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/08 12:09:09 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "FatalWeapon.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "BadRabbits.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* fw = new FatalWeapon();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;


    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    Enemy* c = new SuperMutant();

    me->equip(fw);
    me->recoverAP();
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;

    std::cout << "\nThe attack below should not be printed" << std::endl;
    me->attack(c);
    std::cout << "\nThe attack below should not be printed" << std::endl;
    me->attack(c);
    std::cout << "\nRecovering ..." << std::endl;
    me->recoverAP();
    std::cout << *me;
    std::cout << "\nRecovering ..." << std::endl;
    me->recoverAP();
    std::cout << *me;
    std::cout << "\nRecovering ..." << std::endl;
    me->recoverAP();
    std::cout << *me;
    std::cout << "\nRecovering ..." << std::endl;
    me->recoverAP();
    std::cout << *me;

    std::cout << std::endl;
    Enemy* d = new BadRabbits();
    std::cout << "Rabbits HP: " << d->getHP() << std::endl;
    me->attack(d);
    std::cout << *me;
    me->attack(d);
    std::cout << *me;
    me->attack(d);
    std::cout << *me;
    me->attack(d);
    std::cout << *me;
    me->attack(d);
    std::cout << *me;
    std::cout << "Rabbits HP: " << d->getHP() << std::endl;

    delete me;
    delete b;
    delete pr;
    delete pf;
    delete c;
    delete d;

    return 0;
}
