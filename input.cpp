#include "input.h"
#include <iostream>
#include <sstream>
#include <string>


void input(std::string* &S, std::string* &F, std::string* &R) {
	std::cout << "Enter a sentence = ";
	S = new std::string;
	getline(std::cin, *S);
	std::cout << "Enter find word = ";
	F = new std::string;
	getline(std::cin, *F);
	std::cout << "Enter replacing word = ";
	R = new std::string;
	getline(std::cin, *R);
}
