/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humanb.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:26:08 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/06 12:41:48 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name){}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
  std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}