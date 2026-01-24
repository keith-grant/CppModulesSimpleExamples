module;

#include "foobar_export.h"
#include <string>
#include <iostream>
export module Foo;

export template <typename T>
class Foo {

public:
    Foo() = default;
    ~Foo() = default;

    void print() {
        std::cout << value.print() << std::endl;
    };

    T value;
};