/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 13:09:27 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/06 11:57:49 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie {
  std::string name;


public:
  Zombie();
  ~Zombie();
  void    announce(void);
  void    name_it(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
#endif