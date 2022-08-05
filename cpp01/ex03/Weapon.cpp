/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:18:02 by itomescu          #+#    #+#             */
/*   Updated: 2022/08/05 12:55:10 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type){}

Weapon::~Weapon(){}

const std::string& Weapon::getType() const{
  const std::string& type_ref = this->type;
  return type_ref;
};

void Weapon::setType(std::string type){this->type = type;};
