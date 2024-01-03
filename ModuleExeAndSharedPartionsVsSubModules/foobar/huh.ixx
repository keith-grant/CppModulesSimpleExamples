module;
#include "foobar_export.h"
#include <iostream>

export module foobar.huh;

import foobar.Foo;
import foobar.Bar;

export class FOOBAR_EXPORT Huh{
public:
    Huh() {};
    ~Huh() {};

    void print() {
        std::cout << "Huh";
    }

    void printFooBarHuh() {
        Foo foo;
        Bar bar;
        foo.print();
        bar.print();
        print();
    }

};