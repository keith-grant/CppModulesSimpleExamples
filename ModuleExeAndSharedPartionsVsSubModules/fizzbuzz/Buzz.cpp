module;

#include <iostream>

module fizzbuzz; // Note implementation unit does not (and cannot or CMake will complain) use the partition name (https://discourse.cmake.org/t/c-20-modules-update/7330/111)



Buzz::Buzz() {

}

Buzz::~Buzz() {

}

void Buzz::print() {
    std::cout << "Buzz";
}

void Buzz::printFizzBuzz() {
    Fizz fizz;  // Where did I import this from?  I didn't.  It's in the same module, so it's available.
    fizz.print();
    print();
}

