/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 13:09:29 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/05 15:41:23 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name): name(name)
{
  std::cout << this->name << " spawned" << std::endl;
  return;
}

Zombie::~Zombie()
{
  std::cout << this->name << " has been destroyed" << std::endl;
  return;
}

void Zombie::announce(void)
{
  std::cout << this->name  << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}