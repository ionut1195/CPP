/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 13:59:29 by itomescu          #+#    #+#             */
/*   Updated: 2022/08/05 12:19:18 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
  int number;
  std::cout << "how many zombies do you want?" << std::endl;
  std::cin >> number;
  while (std::cin.fail() || number < 0)
  {
      std::cout << "how many zombies do you want?" << std::endl;
      std::cin.clear();
      std::cin.ignore(256, '\n');
      std::cin >> number;
  }
  
  Zombie* z = zombieHorde(number, "zombalau");
  for (int i = 0; i <  number; i++)
    z[i].announce();
  
  delete[] z;
  return 0;  
}