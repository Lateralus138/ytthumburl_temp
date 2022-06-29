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

  struct switches
  {
    std::string videoIndex;
    std::string videoUrl;
    std::string videoId;
  } swtch;

void processArgs(int argc, char *argv[], switches &swtch)
{
  using namespace GLOBALS::FUNCTIONS;
  for (int index = 1; index < argc; index++)
  {
    const std::string
    ARG = argv[index],
      ARGL = string_tolower(ARG);
    if (ARGL == "-h" || ARGL == "--help")
    {
      // TODO Finish help message
      std::cout << "HELP\n";
      std::exit(0);
    }
    if (ARGL == "-u" || ARGL == "--url")
    {
      if (hasNextArg(index, argc))
      {
        swtch.videoUrl = std::string(argv[index + 1]);
      }
      else
      {
        std::cerr << "No argument provided for " << ARG << '\n';
        std::exit(2);
      }
    }
    if (ARGL == "-v" || ARGL == "--video-id")
    {
      if (hasNextArg(index, argc))
      {
        swtch.videoId = std::string(argv[index + 1]);
      }
      else
      {
        std::cerr << "No argument provided for " << ARG << '\n';
        std::exit(3);
      }
    }
    if (ARGL == "-i" || ARGL == "--index")
    {
      if (hasNextArg(index, argc))
      {
        swtch.videoIndex = std::string(argv[index + 1]);
      }
      else
      {
        std::cerr << "No argument provided for " << ARG << '\n';
        std::exit(4);
      }
    }
  }
}

int main(int argc, char *argv[])
{
//  struct switches
//  {
//    std::string videoIndex;
//    std::string videoUrl;
//    std::string videoId;
//  } swtch;
  using namespace GLOBALS;
  using namespace GLOBALS::FUNCTIONS;
  if (argc > 1)
  {
    processArgs(argc, argv, swtch);
//    for (int index = 1; index < argc; index++)
//    {
//      const std::string
//      ARG = argv[index],
//        ARGL = string_tolower(ARG);
//      if (ARGL == "-h" || ARGL == "--help")
//      {
//        // TODO Finish help message
//        std::cout << "HELP\n";
//        return 0;
//      }
//      if (ARGL == "-u" || ARGL == "--url")
//      {
//        if (hasNextArg(index, argc))
//        {
//          swtch.videoUrl = std::string(argv[index + 1]);
//        }
//        else
//        {
//          std::cerr << "No argument provided for " << ARG << '\n';
//          return 2;
//        }
//      }
//      if (ARGL == "-v" || ARGL == "--video-id")
//      {
//        if (hasNextArg(index, argc))
//        {
//          swtch.videoId = std::string(argv[index + 1]);
//        }
//        else
//        {
//          std::cerr << "No argument provided for " << ARG << '\n';
//          return 3;
//        }
//      }
//      if (ARGL == "-i" || ARGL == "--index")
//      {
//        if (hasNextArg(index, argc))
//        {
//          swtch.videoIndex = std::string(argv[index + 1]);
//        }
//        else
//        {
//          std::cerr << "No argument provided for " << ARG << '\n';
//          return 4;
//        }
//      }
//    }
  }
  else
  {
    std::cerr << "No arguments passed to this program.\n";
    return 1;
  }
  std::cout << swtch.videoId << '\n';
}
