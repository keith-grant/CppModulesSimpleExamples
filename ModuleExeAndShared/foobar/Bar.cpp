module;

#include <iostream>

module Bar;

Bar::Bar() {

}

Bar::~Bar() {

}

void Bar::print() {
    std::cout << "Bar" << std::endl;
}
