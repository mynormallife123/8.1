#include "output.h"
#include <iostream>
#include <string>

void output(std::string* S, std::string* F, std::string* R) {
    size_t pos = 0;
    while ((pos = S->find(*F, pos)) != std::string::npos) {
        S->replace(pos, F->length(), *R); pos += R->length();
    }
    std::cout << "Result sentence = " << *S;
    delete S;
    delete F;
    delete R;

}
