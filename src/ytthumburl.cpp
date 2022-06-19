// -----------------------------------------------
// 'ytthumburl'
// Copyright © 2022
// Ian Pride @ New Pride Software/Services
// Sat 18 Jun 2022 21:18:26 CST
// -----------------------------------------------

#include "functions.h"
#include <filesystem>

#include "Bench.h"

int main(int argc, const char *argv[])
{
	// const char *a[] = {"word"};
	// const char b[] = {"word"};
	// const std::string c = "word";
	// std::cout	<< *a	<< ':'	<< sizeof(*a)	<< '\n';
	// std::cout	<< b	<< ':'	<< sizeof(b) 	<< '\n';
	// std::cout	<< c	<< ':' 	<< sizeof(c) 	<< '\n';
	using namespace GLOBALS;
	using namespace Bench;
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

	// const bool PROCEXISTS = []()
	// {
	// 	bool ex = std::filesystem::exists(std::filesystem::path("/proc"), e_code);
	// 	ethrow(e_code, e_params);
	// 	return ex;
	// }();
	// = std::filesystem::exists(std::filesystem::path("/procs"), ec);
	// ethrow(ec, ep);
	// ethrow_params ep;
	// std::cout << PROCEXISTS << '\n';
	// Bench::start();
	// bool a = is_uint_regex("00000000000000h");
	// Bench::stop();
	// Bench::print_duration("'bool a = is_uint_regex(\"00000000000000h\");' execution time: ", "\n", Bench::Start, Bench::Stop);
	// Bench::start();
	// bool b = std::regex_match("00000000000000h", REGEX::UINT);
	// Bench::stop();
	// Bench::print_duration("'bool b = std::regex_match(\"00000000000000h\", REGEX::UINT);' execution time: ", "\n", Bench::Start, Bench::Stop);
	// Bench::start();
	// bool c = is_uint_isdigit("00000000000000h");
	// Bench::stop();
	// Bench::print_duration("'bool c = is_uint_isdigit(\"00000000000000h\");' execution time: ", "\n", Bench::Start, Bench::Stop);
	// if (is_uint_regex("0"))
	// {
	// 	std::cout << "1 is an unsigned int\n";
	// }
	// if (is_uint_isdigit("0h"))
	// {
	// 	std::cout << " is an unsigned int\n";
	// }
	// int a = 1;
	// std::string as = std::to_string(a);
	// char b = '2';
	// std::string bs = std::to_string(b);
	// if (std::isdigit(a))
	// {
	// 	std::cout << as << " is a digit.\n";
	// }
	// if (std::isdigit(b))
	// {
	// 	std::cout << b << " is a digit.\n";
	// }
	// Bench::start();
	// for (unsigned int i = MINPID; i <= MAXPID64; i++)
	// {
	// 	printf("\r%d", i);
	// }
	// // printf("\n");
	// Bench::stop();
	// Bench::print_duration(" : 'for... printf(\"\\r%d\", i);' execution time: ", "\n", Bench::Start, Bench::Stop);
	// // std::ios_base::sync_with_stdio(false);
	// Bench::start();
	// for (unsigned int i = MINPID; i <= MAXPID64; i++)
	// {
	// 	std::cout << '\r' << i;
	// }
	// // std::cout << '\n';
	// Bench::stop();
	// Bench::print_duration(" : 'for... std::cout << '\\r' << i;' execution time: ", "\n", Bench::Start, Bench::Stop);
}
