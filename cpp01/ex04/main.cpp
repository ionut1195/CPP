/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:27:30 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/06 20:34:54 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{

  if (argc != 4)
  {  std::cout << "you have to provide a file name, a string to be replaced and it's replacement" << std::endl;
    return 0;
  }
  std::string f_name = argv[1];
  std::string to_repl = argv[2];
  std::string replacement = argv[3];
  std::string new_file_name = argv[1];
  new_file_name += ".replace";
  std::fstream new_file;
  new_file.open(new_file_name, std::ios::out);
  if (!new_file)
    std::cout << "creation failed" << std::endl;
  std::cout << new_file << std::endl;
  std::ifstream fs(f_name);
  if (!fs)
    std::cout << "couldn't open file" << std::endl;
  else
  {
    for (std::string line; std::getline(fs, line);)
      std::cout << line  << std::endl ;
  }
}