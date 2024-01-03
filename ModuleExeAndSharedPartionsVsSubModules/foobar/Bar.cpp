module;

#include <iostream>

module foobar.Bar;

import foobar.Foo;

Bar::Bar() {

}

Bar::~Bar() {

}

void Bar::print() {
    std::cout << "Bar";
}

void Bar::printFooBar() {
    Foo foo;
    foo.print();
    print();
}

