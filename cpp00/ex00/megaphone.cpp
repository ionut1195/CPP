#include <iostream>
#include <string.h>

int main(int argc, char *argv[])
{
  if (argc == 1){
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
  }
  for (int i = 1; i < argc; i++)
  {
    for (size_t c = 0; c < strlen(argv[i]); c++)
    {
      argv[i][c] = ::toupper(argv[i][c]);
    }
    std::cout << argv[i];
  };
  std::cout << std::endl;
}