/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:35 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/02 13:28:08 by rzafari          ###   ########.fr       */
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
    Character* moi = new Character("moi");
    std::cout << *moi;
    Enemy* b = new RadScorpion();
    Enemy* c = new SuperMutant();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFirst();

    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);

    moi->attack(b);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    moi->recoverAP();
    std::cout << *moi;
    moi->attack(c);
    std::cout << *moi;
    moi->attack(c);
    std::cout << *moi;
    moi->attack(c);
    std::cout << *moi;
    moi->attack(c);
    std::cout << *moi;
    moi->attack(c);
    std::cout << *moi;
    moi->attack(c);
    std::cout << *moi;

    std::cout << "\nThe attack under should not be printed" << std::endl;
    moi->attack(c);
    std::cout << "\nThe attack under should not be printed" << std::endl;
    moi->attack(c);
    std::cout << "\nRecovering ..." << std::endl;
    moi->recoverAP();
    std::cout << *moi;
    std::cout << "\nRecovering ..." << std::endl;
    moi->recoverAP();
    std::cout << *moi;
    std::cout << "\nRecovering ..." << std::endl;
    moi->recoverAP();
    std::cout << *moi;
    std::cout << "\nRecovering ..." << std::endl;
    moi->recoverAP();
    std::cout << *moi;




    delete b;
    delete c;
    delete moi;
    delete pr;
    delete pf;
    return 0;
}
