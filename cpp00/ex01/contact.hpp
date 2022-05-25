#include <string>
#include <iostream>
#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
  std::string first_name;
  std::string last_name;
  std::string number;
  std::string nickname;

public:
  Contact();
  void set_first(std::string first);
  void set_last(std::string last);
  void set_number(std::string nbr);
  void set_nickname(void);

  std::string get_first(void);
  std::string get_last(void);
  std::string get_number(void);
  std::string get_nickname(void);
};

#endif