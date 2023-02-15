
/*
 *   Author:  Aaron Carroll
 *   Email:   arncarroll@gmail.com
 *   Date:    2022
 *   File:
 *
 *   Program output
 *   --------------
 *
 *
 */

#include <chrono>
#include <iostream>
#include <fmt/format.h>		// This is a library I will need to download to finish this small program 
#include <fmt/ostream.h>

int main(int argc, char *argv[]) {
	auto time = std::chrono::system_clock::now();

	fmt::print("{: DATE: %F\n Week #: %W\n Day #: %j, %A\n Time: %T\n UTC%z (%Z)}", time);
	return 0;
}

 
