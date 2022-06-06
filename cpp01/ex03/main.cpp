/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:18:07 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/06 12:49:26 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"


int main(void)
{
  Weapon club = Weapon("crude spiked club");
  HumanA bob("bob", club);
  bob.attack();
  club.setType("Death scythe");
  // bob.attack();
  std::cout << club.getType() << std::endl;
}