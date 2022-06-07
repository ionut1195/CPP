/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:59:53 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/07 17:57:59 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
  std::string brain = "HI THIS IS BRAIN";
  std::string* stringPTR = &brain;
  std::string stringREF = brain;

  std::cout << "Memory address of brain variable  " << &brain << std::endl;
  std::cout << "Memory address held by stringPTR variable  " << stringPTR << std::endl;
  std::cout << "Memory address held by stringREF variable  " << &stringREF << std::endl;

  std::cout << "The value of the string variable  " << brain << std::endl;
  std::cout << "The value pointed to by stringPTR " << *stringPTR << std::endl;
  std::cout << "The value pointed to by stringREF  " << stringREF << std::endl;
}