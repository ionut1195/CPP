/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:59:53 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/06 12:15:36 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
  std::string brain = "HI THIS IS BRAIN";
  std::string* stringPTR = &brain;
  std::string stringREF = brain;

  std::cout << "address of brain variable  " << &brain << std::endl;
  std::cout << "address of stringPTR variable  " << &stringPTR << std::endl;
  std::cout << "address of stringREF  variable  " << &stringREF << std::endl;

  std::cout << "value of brain variable  " << brain << std::endl;
  std::cout << "value of stringPTR variable  " << stringPTR << std::endl;
  std::cout << "value of stringREF  variable  " << stringREF << std::endl;
}