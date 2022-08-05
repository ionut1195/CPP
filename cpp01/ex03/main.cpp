/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:18:07 by itomescu          #+#    #+#             */
/*   Updated: 2022/08/05 13:15:42 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"


int main(void)
{
  {
  Weapon club = Weapon("crude spiked club");
  HumanA bob("Bob", club);
  bob.attack();
  club.setType("some other type of club");
  bob.attack();
  }
  {
  Weapon club = Weapon("crude spiked club");
  HumanB jim("Jim");
  jim.setWeapon(club);
  jim.attack();
  club.setType("some other type of club");
  jim.attack();
  }
return 0;
}