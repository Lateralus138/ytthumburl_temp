// -----------------------------------------------
// 'ytthumburl'
// Copyright © 2022
// Ian Pride @ New Pride Software/Services
// Sat 18 Jun 2022 21:18:26 CST
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
	// using namespace Bench;
	if (argc > 1)
	{
		for (int index = 1; index < argc; index++)
		{
			const std::string
					ARG = argv[index],
					ARGL = string_tolower(ARG);
			if (ARGL == "-h" || ARGL == "--help")
			{
				std::cout << "HELP\n";
				return 0;
			}
			if (ARGL == "-u" || ARGL == "--url")
			{
				std::cout << "HELP\n";
				return 0;
			}	
			if (ARGL == "-v" || ARGL == "--video-id")
			{
				std::cout << "HELP\n";
				return 0;
			}
			if (ARGL == "-i" || ARGL == "--index")
			{
				std::cout << "HELP\n";
				return 0;
			}			
		}
	}
}
