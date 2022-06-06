/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 13:59:29 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/05 15:40:26 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
  Zombie zm("hahhad");
  Zombie *z = newZombie("Zolombie");
  randomChump("Randomzombalau");
  delete z;
  return 0;  
}