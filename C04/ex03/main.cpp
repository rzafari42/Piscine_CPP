/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:49 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 00:11:34 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

int		main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(1, *bob);


    std::cout << "Total XP : " << tmp->getXP() << std::endl;

	//delete bob;
	delete me;
	delete src;

	std::cout << std::endl;
	std::cout << std::endl;
    
	
    
    //Test with 4 materia 
    src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());


	me = new Character("MeAgain");

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	

    //Unknown Materia Type in createMateria
    AMateria *tmp_null;
    tmp_null = src->createMateria("qzdssdqds");
    if (tmp_null == NULL)
        std::cout << "Unknown type" << std::endl;
    std::cout << std::endl;
    

	me->use(-42, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me->use(42, *bob);

    std::cout << std::endl;
    std::cout << std::endl;

    //Test the copy
	Character me_cpy(*me);
	me_cpy.use(-6, *bob);
	me_cpy.use(0, *bob);
	me_cpy.use(1, *bob);
	me_cpy.use(2, *bob);
	me_cpy.use(3, *bob);
	me_cpy.use(4, *bob);
	me->use(42, *bob);

	std::cout << "---------------------------------" << std::endl;
	for (int i = -1; i < 5; i++)
		me_cpy.unequip(i);
	for (int i = -1; i < 5; i++)
		me_cpy.use(i, *bob);
    std::cout << "Nothing should be printed here" << std::endl;
	std::cout << "---------------------------------" << std::endl;

	
    delete bob; 
    bob = NULL;
    delete me; 
    me = NULL;
    delete src;
    src = NULL;

	tmp = NULL;
    tmp_null = NULL;
	std::cout << "#################################" << std::endl;

	return (0);
}