#include <string>
#include <iostream>
#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
  std::string first_name;
  std::string last_name;
  std::string number;
  std::string nickname;
  std::string secret;

public:
  Contact();
  ~Contact();
  void set_first(std::string first);
  void set_last(std::string last);
  void set_number(std::string nbr);
  void set_nickname(std::string nickname);
  void set_dark_secret(std::string secret);


  std::string get_first(void);
  std::string get_last(void);
  std::string get_number(void);
  std::string get_nickname(void);
  std::string get_secret(void);
};

#endif