/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:01:36 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/07 17:49:10 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
  levels[0] = "DEBUG";
  levels[1] = "INFO";
  levels[2] = "WARNING";
  levels[3] = "ERROR";
  point[0] = &Harl::debug;
  point[1] = &Harl::info;
  point[2] = &Harl::warning;
  point[3] = &Harl::error;
  
}

Harl::~Harl(){}

void Harl::complain(std::string level){
  for (int i = 0; i < 4; i++)
    if (levels[i] == level)
      (this->*point[i])();
}

void Harl::debug(void) {
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<< std::endl;
}

void Harl::info(void) {
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}


void Harl::warning(void) {
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
  
}

void Harl::error(void) {
  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

