/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:12:01 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/03 23:22:34 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class Phonebook {
  Contact contacts[8];
  int total;

public:
  Phonebook();
  ~Phonebook();

  void  add(std::string first, std::string last, std::string number,std::string nickname, std::string secret);
  int   get_total_entries(void);
  void  search();
  std::string print_f(std::string s);

};
#endif