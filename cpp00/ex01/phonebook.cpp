#include "phonebook.hpp"

Phonebook::Phonebook() {
  std::cout << "Phonebook constructed" << std::endl;
  this->total = 0;
}

Phonebook::~Phonebook() {
  std::cout << "rest in pepperoni" << std::endl;
}

void Phonebook::add(Contact c){
  
  this->contacts[this->total % 8].set_first(c.get_first());
  this->contacts[this->total % 8].set_last(c.get_last());
  this->contacts[this->total % 8].set_number(c.get_number());
  this->contacts[this->total % 8].set_nickname();
  this->total++;
}

void Phonebook::search(int idx) {
  std::cout << this->contacts[idx].get_first() << std::endl;
  std::cout << this->contacts[idx].get_last() << std::endl;
  std::cout << this->contacts[idx].get_number() << std::endl;
  std::cout << this->contacts[idx].get_nickname() << std::endl;
}