#ifndef WHOLE_NUMBER_H 
#define WHOLE_NUMBER_H
#include <iostream>

using namespace std;

class WholeNumber {
private:
    int value; // Private data member to store the value

public:
    // Default Contructor 
    WholeNumber ();
    // Constructor to initialize value
    WholeNumber(int val);

    // Accessor (getter) for value
    int getValue() const;

    // Mutator (setter) for value
    void setValue(int val);
};

#endif // WHOLENUMBER_H

