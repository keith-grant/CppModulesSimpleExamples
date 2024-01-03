module;

#include <iostream>

module fizzbuzz; // Note implementation unit does not (and cannot or CMake will complain) use the partition name

Buzz::Buzz() {

}

Buzz::~Buzz() {

}

void Buzz::print() {
    std::cout << "Buzz" << std::endl;
}
