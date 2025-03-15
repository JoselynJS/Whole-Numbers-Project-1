#include "Whole_Number.h"

// Default constructor
WholeNumber::WholeNumber() : value(0) {}

// Parameterized constructor
WholeNumber::WholeNumber(int val) : value(val) {}

// Accessor
int WholeNumber::getValue() const {
    return value;
}

// Mutator
void WholeNumber::setValue(int val) {
    value = val;
}
