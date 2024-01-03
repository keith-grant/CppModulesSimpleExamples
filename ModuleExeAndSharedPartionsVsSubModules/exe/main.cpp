#include <iostream>

import foobar.Foo;
import foobar.Bar;
import foobar.huh;

//import foobar; // Intellisense doesn't like this, but it works

import fizzbuzz;

int main()
{
    Foo foo;
    Bar bar;
    foo.print();
    std::cout << std::endl;
    bar.print();
    std::cout << std::endl;
    bar.printFooBar();
    std::cout << std::endl << std::endl;

    Huh huh;
    huh.print();
    std::cout << std::endl;
    huh.printFooBarHuh();
    std::cout << std::endl << std::endl;
    
    Fizz fizz;
    Buzz buzz;
    fizz.print();
    std::cout << std::endl;
    buzz.print();
    std::cout << std::endl;
    buzz.printFizzBuzz();
    std::cout << std::endl << std::endl;

    Doh doh;
    doh.print();
    std::cout << std::endl;
    doh.printFizzBuzzDoh();
    std::cout << std::endl;

    return 0;
}
