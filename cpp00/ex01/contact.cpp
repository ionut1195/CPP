#include "contact.hpp"

Contact::Contact() {
  std::cout << "Useless message from the constructor" << std::endl;
}

void Contact::set_first(std::string first){
  first_name = first;
}

void Contact::set_last(std::string last)
{
  last_name = last;
}

void Contact::set_number(std::string nbr)
{
  number = nbr;
}

void Contact::set_nickname(void){
  nickname = this->get_first() + " " + this->get_last();
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
