#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <vector>
struct ethrow_params
{
  bool print_;
  int exit_;
};
namespace GLOBALS
{
  namespace VARIABLES
  {
    extern const unsigned int MINPID;
    extern const unsigned int MAXPID32;
    extern const unsigned int MAXPID64;
    extern ethrow_params e_params;
    extern std::error_code e_code;
  };
  namespace FUNCTIONS
  {
    extern void ethrow(std::error_code ec_, ethrow_params params_);
    extern bool is_string_uint(std::string string_);
    extern bool is_char_string_uint(char * string_);
    extern bool is_string_int(std::string string_);
    extern std::string string_tolower(std::string string_);
  };
};

#endif
