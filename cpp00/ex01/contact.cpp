#include "contact.hpp"

Contact::Contact() {
  std::cout << "Useless message from the constructor" << std::endl;
}

Contact::~Contact() {
  std::cout << "object destoryed" << std::endl;
}

void Contact::set_first(std::string first){
  this->first_name = first;
}

void Contact::set_last(std::string last)
{
  this->last_name = last;
}

void Contact::set_number(std::string nbr)
{
  this->number = nbr;
}

void Contact::set_nickname(void){
  this->nickname = this->get_first() + " " + this->get_last();
}

std::string Contact::get_first(void){
  return this->first_name;
}

std::string Contact::get_last(void){
  return this->last_name;
}
std::string Contact::get_number(void){
  return this->number;
}
std::string Contact::get_nickname(void){
  return this->nickname;
}
