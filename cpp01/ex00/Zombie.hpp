/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 13:09:27 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/05 14:39:22 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>


class Zombie {
  std::string name;


public:
  Zombie(std::string name);
  ~Zombie();
  void    announce(void);
};
Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif