/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:17:49 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/06 12:36:49 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon{
  std::string type;

public:
  Weapon(std::string type);
  ~Weapon();
  std::string getType() const;
  void setType(std::string type);
};



#endif