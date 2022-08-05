/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:01:32 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/07 18:32:10 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(void)
{
  Harl Karen;
  std::cout << "What should Karen complain about today>" <<std::endl;
  std::cout << "DEBUG | INFO | WARNING | ERROR" << std::endl;
  std::string complaint;
  std::getline(std::cin, complaint);
  Karen.complain(complaint);
  return 0;
  
}