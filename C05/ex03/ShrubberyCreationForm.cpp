/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 08:22:23 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 23:18:18 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src)
{
    *this = src;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
    Form::operator=(rhs);
    return *this;
}

void ShrubberyCreationForm::formAction(std::string const& target) const
{
    std::string str;
    std::string s1 = target;
    std::string s2 = "_Shrubbery";
    str.append(s1);
    str.append(s2);

    std::string const myfile(str);
    std::ofstream myflux(myfile.c_str());

    if (!myflux.is_open())
    {
        std::cout << "Cannot open file !" << std::endl;
        return;
    }
    myflux << 
    "                                                                  \n" << \
    "                    *      ..  //(*(    / .                       \n" << \
    "                     / . ,,*,(/*    ./ # (((         /            \n" << \
    "            ,         *,/,%**   /  /(.  , * (( /   ,              \n" << \
    "                * .** /.*.(/(,##/% #/( */(*( (*           .       \n" << \
    "              ,*,,* .(* ./ / /. ((./%  ( / . /. /(**#             \n" << \
    "            *  ,*,( ** .,  / ,,(** /*.,/ /   ,   ((((.            \n" << \
    "            ./*  ..( /,(*(( ((# , */*( ,(((##% #**#*              \n" << \
    "         (  ,(/,// ( /../.( / *//.. / ((/(. ./ #/ *#. .           \n" << \
    "         .   ./ /, /*/(* //* ( //, /..  /(.. ,*(,#.*              \n" << \
    "             %( #/, /(. //.*(*. *,,,..,,,*## /(#(  #*/            \n" << \
    "             ,# /  /   *//# ** *,,#**., **/  ,/ . *. .            \n" << \
    "           *     /%  //((#    /,*(/,     .#. (# */                \n" << \
    "               *((. ( (  ((*   (*((      /      *% (   ,          \n" << \
    "                  /     .      /((,         #%    .               \n" << \
    "                     .         ,//                                \n" << \
    "                              .#(/(.                              \n" << \
    "                           ..  (,#.,                              \n" << \
    "                          , # # (##*#                             \n" << \
    "                .          ./(*/%/*/**                            \n" << \
    "              ,#,*(#,  &(,%, ///...##( #,(/(/*,/**     ,          \n" << \
    "             .        .,/##/*, #(#/.,((((,          *             \n" << \
    "     /    ,(//#/##,(. *(% *# /,&#..*#//,/( * , #(  ,#.(  #*    *  \n" << \
    "         .  ,     .( ,*  //(.,, /# ,.(***     %. */%#,            \n" << \
    "     / /*,/.#.*//      ( ,  *#,.  *#(/( .%  ***,    *     *(,    (\n" << \
    "   ,  .,    ( /    .// (,.*( /#,/,/.*. */.%## #.(.  *  #     ..  .\n" << \
    "   / /,   / /   ,,. *(  ...(/  *#.%/ . #.(,# ./,     / / # #      \n" << \
    "    , /.   *  (.&%/%(# / .,/.,,    * #  ( ((,(/.*    # #  ,(      \n" << \
    "        /   #,/  * * *     %/  # .# *   # , *% .# ( (, * , . (    \n" << \
    "   , ,/        *   &/ . #/(/.  / #/. *(.# ,#   # (( (//  ,(((( ,/ \n" << \
    "     .     %  /     .**  %    ./* * .  ., /  *#(.   #             \n" << \
    "         . (   , (  .# /### #/ /, %# ,     ( (*.  , ,*  , .       \n" << \
    "                    .  , #      . ..     *    * (                 \n" << \
    "              *     #  ,  ( .% ..   (    /.%   *  ,               \n" << \
    "                      /       /       *      (  .                 \n";
    myflux.close();
}
