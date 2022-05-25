#include "contact.hpp"
#include <string>
#include <iostream>


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class Phonebook {
  Contact contacts[8];
  int total;

public:
  Phonebook();
  ~Phonebook();

  void  add(Contact c);
  void  search(int idx);

};
#endif