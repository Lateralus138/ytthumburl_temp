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
  };
};