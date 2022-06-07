/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:01:34 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/07 17:40:56 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

class Harl
{
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
  std::string levels[4];
  void (Harl::*point[4])(void);
  
public:
  Harl();
  ~Harl();
  void complain(std::string level);
  
};




#endif