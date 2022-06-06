/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:18:02 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/06 12:45:13 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type){}

Weapon::~Weapon(){}

std::string Weapon::getType() const{return this->type;};
void Weapon::setType(std::string type){this->type = type;};
