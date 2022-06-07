/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 13:59:29 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/07 17:52:27 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
  Zombie zm("Chewbacca");
  Zombie *z = newZombie("Baldy");
  randomChump("BigBoy");
  delete z;
  return 0;  
}