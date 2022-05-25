#include "contact.hpp"
#include "phonebook.hpp"

int main(void)
{
  Contact ionut;
  Phonebook phonebook;
  ionut.set_first("ionut");
  ionut.set_last("tomescu");
  ionut.set_nickname();
  ionut.set_number("121212");

  phonebook.add(ionut);
  phonebook.search(0);
}