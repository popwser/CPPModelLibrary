#include <CPPML/logging/logging.hpp>

#include <stdio.h>

namespace CPPML { namespace loading {

FILE* OpenFile(const char* address) {
    FILE* file = fopen(address, "r"); // tries to open file at address and creates buffer (heap allocated)

    if(file == nullptr) {
        CPPML_ERROR("Could not open file at \"{}\".", address);
    } else {
        CPPML_TRACE("Successfully opened file at \"{}\".", address);
    }

    return file;
}

}}