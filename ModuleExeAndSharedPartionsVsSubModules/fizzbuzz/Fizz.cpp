module;

#include <iostream>

module fizzbuzz; // Note implementation unit does not (and cannot or CMake will complain) use the partition name

Fizz::Fizz() {

}

Fizz::~Fizz() {

}

void Fizz::print() {
    std::cout << "Fizz" << std::endl;
}

