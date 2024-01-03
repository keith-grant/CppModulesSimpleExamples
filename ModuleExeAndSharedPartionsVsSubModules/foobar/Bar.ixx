module;

#include "foobar_export.h"

export module foobar.Bar;

export class FOOBAR_EXPORT Bar {
public:
    Bar();
    ~Bar();

    void print();
};