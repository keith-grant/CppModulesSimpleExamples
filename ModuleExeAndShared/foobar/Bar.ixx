module;

#include "foobar_export.h"
#include <string>

export module Bar;

export class FOOBAR_EXPORT Bar {
public:
    Bar();
    ~Bar();

    std::string print();
};