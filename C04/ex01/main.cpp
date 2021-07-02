/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:35 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/02 15:37:55 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    //Enemy* c = new SuperMutant();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

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

    /*std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
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

    std::cout << "\nThe attack under should not be printed" << std::endl;
    me->attack(c);
    std::cout << "\nThe attack under should not be printed" << std::endl;
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


    delete b;
    delete c;
    delete me;
    delete pr;
    delete pf;*/

    return 0;
}
