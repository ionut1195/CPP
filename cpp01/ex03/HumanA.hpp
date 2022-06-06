/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:18:11 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/06 18:05:05 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include <string>
#include "Weapon.hpp"
#include <iostream>

class HumanA{
  Weapon& weapon;
  std::string name;
public:
  HumanA(std::string name, Weapon& weapon);
  ~HumanA();
  void attack();
};



#endif