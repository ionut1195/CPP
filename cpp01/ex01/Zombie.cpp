/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 13:09:29 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/06 11:58:02 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
  std::cout << "a zombie spawned" << std::endl;
  return;
}

Zombie::~Zombie()
{
  std::cout << this->name << " has been destroyed" << std::endl;
  return;
}
void    Zombie::name_it(std::string name){
  this->name = name;
}

void Zombie::announce(void)
{
  std::cout << this->name  << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
