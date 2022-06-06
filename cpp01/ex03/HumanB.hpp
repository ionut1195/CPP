/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:18:09 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/06 18:22:47 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include <string>
#include "Weapon.hpp"
#include <iostream>

class HumanB {
  Weapon* weapon;
  std::string name;
public:
  HumanB(std::string name);
  ~HumanB();
  void attack();
  void setWeapon(Weapon &w);
};

#endif