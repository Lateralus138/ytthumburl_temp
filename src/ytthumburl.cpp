// -----------------------------------------------
// 'ytthumburl'
// Copyright © 2022
// Ian Pride @ New Pride Software/Services
// Sat 18 Jun 2022 21:18:26 CST
// -----------------------------------------------

#include "functions.h"
#include <filesystem>
#include <algorithm>
#include "Bench.h"


int main(int argc, const char *argv[])
{
	// using namespace REGEX;
	using namespace Bench;
	if (argc > 1)
	{
		// start();
		// if (std::regex_match(argv[1], HELP))
		// {
		// 	std::cout << "HELP\n";
		// 	// return 0;
		// }
		// stop();
		// print_duration("'if (std::regex_match(argv[1], HELP))... ' execution time: ", "\n", Start, Stop);
		start();
		std::string lower = argv[1];
		std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
		if (lower == "help")
		{
			std::cout << "HELP\n";
			// return 0;
		}
		stop();
		print_duration("'if (lower == \"help\")... ' execution time: ", "\n", Start, Stop);
	}
	// 	ethrow_params ep;
	// std::cout << e_params.print_ << '\n';
	// const bool PROCEXISTS = []()
	// {
	// 	std::error_code ec;
	// 	bool ex = std::filesystem::exists(std::filesystem::path("/proc"), ec);
	// 	GLOBALS::ethrow_params ep = {true, 0};
	// 	GLOBALS::ethrow(ec, ep);
	// 	return ex;
	// }();
	// = std::filesystem::exists(std::filesystem::path("/procs"), ec);
	// GLOBALS::ethrow(ec, ep);
	// GLOBALS::ethrow_params ep;
	// std::cout << GLOBALS::ethrowparams.<< '\n';
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
	// for (unsigned int i = GLOBALS::MINPID; i <= GLOBALS::MAXPID64; i++)
	// {
	// 	printf("\r%d", i);
	// }
	// // printf("\n");
	// Bench::stop();
	// Bench::print_duration(" : 'for... printf(\"\\r%d\", i);' execution time: ", "\n", Bench::Start, Bench::Stop);
	// // std::ios_base::sync_with_stdio(false);
	// Bench::start();
	// for (unsigned int i = GLOBALS::MINPID; i <= GLOBALS::MAXPID64; i++)
	// {
	// 	std::cout << '\r' << i;
	// }
	// // std::cout << '\n';
	// Bench::stop();
	// Bench::print_duration(" : 'for... std::cout << '\\r' << i;' execution time: ", "\n", Bench::Start, Bench::Stop);
}
