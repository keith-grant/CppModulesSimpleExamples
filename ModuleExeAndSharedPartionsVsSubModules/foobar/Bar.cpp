module;

#include <iostream>

module foobar.Bar;

Bar::Bar() {

}

Bar::~Bar() {

}

void Bar::print() {
    std::cout << "Bar" << std::endl;
}
