module;

#include <iostream>

module fizzbuzz; // Note implementation unit does not (and cannot or CMake will complain) use the partition name (https://discourse.cmake.org/t/c-20-modules-update/7330/37)

Fizz::Fizz() {

}

Fizz::~Fizz() {

}

void Fizz::print() {
    std::cout << "Fizz";
}

