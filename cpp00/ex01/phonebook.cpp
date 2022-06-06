/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:11:53 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/05 15:48:24 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook() {
  std::cout << "Phonebook constructed" << std::endl;
  this->total = -1;
  this->added = -1;
}

Phonebook::~Phonebook() {
  std::cout << "rest in pepperoni - Phonebook destroyed!" << std::endl;
}

void Phonebook::add(std::string first, std::string last, std::string number,std::string nickname, std::string secret){
  this->total++;
  if (this->added != 7)
    this->added++;
  this->contacts[this->total % 8].set_first(first);
  this->contacts[this->total % 8].set_last(last);
  this->contacts[this->total % 8].set_number(number);
  this->contacts[this->total % 8].set_nickname(nickname);
  this->contacts[this->total % 8].set_dark_secret(secret);

}

int Phonebook::get_total_entries(void)
{
  return this->total;
}

std::string Phonebook::print_f(std::string s)
{
  std::string formatted;

  if (s.length() > 10)
  {
    formatted = s.substr(0, 9) + ".";
    return formatted;
  }
  return s;
}


void Phonebook::search() {
  std::cout 
    << std::setw(10) << "ID" << std::setw(1) << "|"
    << std::setw(10) << "First Name" << std::setw(1) << "|"
    << std::setw(10) << "Last name" << std::setw(1) << "|"
    << std::setw(10) << "Nickname" << std::setw(1) << "|"
    << std::endl;
  std::cout << "|__________________________________________|" << std::endl;
  for (int i = 0; i <= this->added; i++)
  {
    std::cout
    << std::setw(10) << std::to_string(i) << std::setw(1) << "|"
    << std::setw(10) << print_f(this->contacts[i].get_first()) << std::setw(1) << "|" 
    << std::setw(10) << print_f(this->contacts[i].get_last()) << std::setw(1) << "|"
    << std::setw(10) << print_f(this->contacts[i].get_nickname()) << std::setw(1) << "|"
    << std::endl;
  }
  std::cout << "|__________________________________________|" << std::endl;
  int idx = -1;
  if (this->total == -1)
    return;
  std::cout << "Enter the index of the contact you're looking for:\nfrom 0 to " + std::to_string(this->added)  << std::endl;
  std::cin >> idx;
  while ((idx < 0 || idx > this->added) || std::cin.fail())
  {
    std::cout << "Enter the index of the contact you're looking for:\nfrom 0 to " + std::to_string(this->added)  << std::endl;
    std::cin.clear();
    std::cin.ignore(256, '\n');
    std::cin >> idx;
  }
  std::cout << "First name: " + this->contacts[idx].get_first() << std::endl;
  std::cout << "Last name: " + this->contacts[idx].get_last() << std::endl;
  std::cout << "Nickname: " + this->contacts[idx].get_nickname() << std::endl;
  std::cout << "Phone number: " + this->contacts[idx].get_number() << std::endl;
  std::cout << "Secret: " + this->contacts[idx].get_secret() << std::endl;
  
}
