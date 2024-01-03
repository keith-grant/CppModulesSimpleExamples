module;

#include "foobar_export.h"

export module Foo;

export class FOOBAR_EXPORT Foo {

public:
    Foo();
    ~Foo();

    void print();
};