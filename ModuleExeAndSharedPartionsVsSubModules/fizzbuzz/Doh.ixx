module;
#include "fizzbuzz_export.h"
#include <iostream>

export module fizzbuzz:Doh;

import :Buzz; // Because we are in a partition interface file then we need to import the other module partitions
import :Fizz; // This is different from the implementation unit where we can use things defined in the same module without importing them

export class FIZZBUZZ_EXPORT Doh {
public:
    Doh() {};
    ~Doh() {};
    
    void print() {
        std::cout << "Doh";
    }

    void printFizzBuzzDoh() {
        Fizz fizz;
        Buzz buzz;
        fizz.print();
        buzz.print();
        print();
    }

};