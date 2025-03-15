#include "Whole_Number.h"

int main() {
    WholeNumber num1;  // Should now work correctly
    cout << "Default constructor value: " << num1.getValue() << endl;

    WholeNumber num2(15);
    cout << "Parameterized constructor value: " << num2.getValue() << endl;

    num2.setValue(25);
    cout << "Updated value: " << num2.getValue() << endl;

    return 0;
}