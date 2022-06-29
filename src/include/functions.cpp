#include "functions.h"
#include <algorithm>
#include <cstring>
namespace GLOBALS
{
  namespace VARIABLES
  {
    const unsigned int MINPID = 0;
    const unsigned int MAXPID32 = 32768;
    const unsigned int MAXPID64 = 4194304;
    ethrow_params e_params = {true, 0};
    std::error_code e_code;
  };
  namespace FUNCTIONS
  {
//    struct switches
//    {
//      std::string videoIndex;
//      std::string videoUrl;
//      std::string videoId;
//    } swtch;
    void ethrow(std::error_code ec_, ethrow_params params_)
    {
      const int eint_ = (int)ec_.value();
      if (eint_ != 0)
      {
        if (params_.print_) std::cerr << ec_.message() << '\n';
        exit((params_.exit_ != 0) ? params_.exit_ : eint_);
      }
    }
    bool is_string_uint(std::string string_)
    {
      bool is_uint = true;
      for (unsigned int i = 0; i < (unsigned int)string_.length(); i++)
      {
        if (!std::isdigit(string_[i]))
        {
          is_uint = false;
          break;
        }
      }
      return is_uint;
    }
    bool is_char_string_uint(char * string_)
    {
      bool is_uint = true;
      for (int i = 0; i < (int) std::strlen(string_); i++)
      {
        if (!std::isdigit(string_[i]))
        {
          is_uint = false;
          break;
        }
      }
      return is_uint;
    }
    bool is_string_int(std::string string_)
    {
      const char init = string_[0];
      if ((init == '-') || (init == '+'))
        string_ = string_.substr(1);
      return is_string_uint(string_);
    }
    std::string string_tolower(std::string string_)
    {
      std::transform(string_.begin(), string_.end(), string_.begin(), ::tolower);
      return string_;
    }
    bool hasNextArg(int index, int maxIndex)
    {
      return ((index + 1) < maxIndex);
    }
    void processArgs(int argc, char *argv[], switches &swtch)
    {
//      using namespace GLOBALS::FUNCTIONS;
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
  };
};