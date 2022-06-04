#include "contact.hpp"

Contact::Contact() {
  std::cout << "contact created" << std::endl;
}

Contact::~Contact() {
  std::cout << "contact destoryed" << std::endl;
}

void Contact::set_first(std::string first){
  this->first_name = first;
}
// void Contact::destruct()
// {
//   this->~Contact();
// }
void Contact::set_last(std::string last)
{
  this->last_name = last;
}

void Contact::set_number(std::string nbr)
{
  this->number = nbr;
}

void Contact::set_nickname(std::string nickname){
  this->nickname = nickname;
}

void Contact::set_dark_secret(std::string secret)
{
  this->secret = secret;
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
std::string Contact::get_secret(void){
  return this->secret;
}