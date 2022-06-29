// -----------------------------------------------
// 'ytthumburl'
// Ian Pride @ New Pride Software/Services
// Copyright © 2022
// Wed 29 Jun 2022 07:43:43 PM UTC
// -----------------------------------------------

#include "functions.h"
// #include <filesystem>
// #include <cstring>
// #include "Bench.h"
// #include <typeinfo>

int main(int argc, char *argv[])
{
  using namespace GLOBALS;
  using namespace GLOBALS::FUNCTIONS;
  switches swtch;
  if (argc > 1)
  {
    processArgs(argc, argv, swtch);
  }
  else
  {
    std::cerr << "No arguments passed to this program.\n";
    return 1;
  }
  std::cout << swtch.videoId << '\n';
}
