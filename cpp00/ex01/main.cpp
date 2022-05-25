#include "contact.hpp"

int main(void)
{
  Contact ionut;
  ionut.set_first("ionut");
  ionut.set_last("tomescu");
  ionut.set_nickname();
  ionut.set_number("121212");



  std::cout << ionut.get_first() << std::endl;
  std::cout << ionut.get_last() << std::endl;
  std::cout << ionut.get_number() << std::endl;
  std::cout << ionut.get_nickname() << std::endl;

}