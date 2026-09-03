#include <iostream>

int main() {
    std::cout << "Your C++ Version Code is: " << __cplusplus << "\n";
    
    if (__cplusplus == 202302L) std::cout << "You are using C++23!\n";
    else if (__cplusplus == 202002L) std::cout << "You are using C++20!\n";
    else if (__cplusplus == 201703L) std::cout << "You are using C++17!\n";
    else if (__cplusplus == 201402L) std::cout << "You are using C++14!\n";
    else std::cout << "You are using an older version or pre-standard.\n";
}
