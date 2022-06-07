/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:27:30 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/07 18:13:16 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char *argv[])
{
  if (argc != 4)
  {  std::cout << "Provide the following arguments "
    << "<file name> <string to be replaced> <replacement string>"
    << std::endl;
    return 0;
  }
  std::string f_name = argv[1];
  std::string to_repl = argv[2];
  std::string replacement = argv[3];
  std::string new_file_name = argv[1];
  new_file_name += ".replace";
  
  std::stringstream builder;
  std::fstream new_file;
  new_file.open(new_file_name, std::ios::out);
  if (!new_file)
  {
    std::cout << "creation failed" << std::endl;
    return 1;
  }
  std::ifstream fs(f_name);


  builder << fs.rdbuf();
  fs.close();
  std::string st = builder.str();
  if (!fs){
    std::cout << "couldn't open file" << std::endl;
    return 1;
  }
  else
  {
      size_t start = 0;
      size_t end = 0;
      do
      {
          start = st.find(to_repl, end);
          if (std::string::npos != start){
            new_file << st.substr(end, start - end) << replacement;
            end = start + to_repl.length();
          }
      }
      while (std::string::npos != start);
      new_file << st.substr(end);
      new_file.close();
    }
}
