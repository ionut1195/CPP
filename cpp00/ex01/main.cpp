/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:11:37 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/03 23:22:43 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"
#include "phonebook.hpp"


int valid_input(std::string input, int entries)
{
  if (input.compare("ADD") == 0 || input.compare("add") == 0 || 
  input.compare("EXIT") == 0 || input.compare("exit") == 0)
    return 1;
  if (input.compare("SEARCH") == 0 || input.compare("search") == 0)
  {
    if (entries > -1)
      return 1;
    else
    {
      std::cout << "Can't search when there are no entries in the phonebook" << std::endl;
      return 0;
    }
  }
  return 0;
}
int main(void)
{
  std::string inp;
  Phonebook phonebook;
  std::cout << "Welcome to your shitty phonebook, you can add or search contacts" << std::endl;
  while (!valid_input(inp, phonebook.get_total_entries()))
    {
      std::cout << "ADD or SEARCH a contact.. or EXIT" << std::endl;
      std::getline(std::cin, inp);
    }
  while (inp != "EXIT" || inp != "exit")
  {
    if (inp == "ADD" || inp == "add"){
      std::string first;
      std::string last;
      std::string number;
      std::string nickname;
      std::string secret;
      std::cout << "Enter first name: " << std::endl;
      std::cin >> first;
      std::cout << "Enter last name: " << std::endl;
      std::cin >> last;
      std::cout << "Enter nickname: " << std::endl;
      std::cin >> nickname;
      std::cout << "Enter secret: " << std::endl;
      std::cin >> secret;
      std::cout << "Enter phone number: " << std::endl;
      std::cin >> number;
      std::cin.clear();
      std::cin.ignore(256, '\n');
      phonebook.add(first, last, number, nickname, secret);
    }
    else if (inp == "SEARCH" || inp == "search")
        phonebook.search();
    else if (inp == "EXIT" || inp == "exit")
      return (0);
    std::cout << "ADD or SEARCH a contact.. or EXIT" << std::endl;
    std::cin >> inp;
  }
}