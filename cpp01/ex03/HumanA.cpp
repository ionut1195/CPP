/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:18:13 by itomescu          #+#    #+#             */
/*   Updated: 2022/08/05 13:07:35 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): weapon(weapon), name(name){
  std::cout << this->name << " has spawned and has a " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(){}

void HumanA::attack()
{
  std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}