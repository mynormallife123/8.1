#include "input.h"
#include "output.h"
#include <iostream>

int main() {
	std::string* S = nullptr;
	std::string* F = nullptr;
	std::string* R = nullptr;
	input(S, F, R);
	output(S, F, R);
}
