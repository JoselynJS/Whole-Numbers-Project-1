#include "Whole_Number.h"
#include <cmath>


using namespace std;

// Default constructor
WholeNumber::WholeNumber() : value(0) {
    // Constructor body left empty intentionally
}

// Parameterized constructor
WholeNumber::WholeNumber(int newValue) : value(newValue) {
    // Constructor body left empty intentionally
}

// Accessor function to get the value
int WholeNumber::getValue() const {
    return value;
}

// Mutator function to set the value
void WholeNumber::setValue(int newValue) {
    value = newValue;
}

// Overload insertion operator
ostream& operator<<(ostream &out, const WholeNumber &wn) {
    out << wn.value;
    return out;
}

// Overload extraction operator
istream& operator>>(istream &in, WholeNumber &wn) {
    in >> wn.value;
    return in;
}

// Unary plus operator
WholeNumber WholeNumber::operator+() const {
    return WholeNumber(value);
}

// Unary minus operator
WholeNumber WholeNumber::operator-() const {
    return WholeNumber(-value);
}

// Binary addition operator
WholeNumber WholeNumber::operator+(const WholeNumber &other) const {
    return WholeNumber(value + other.value);
}

// Binary subtraction operator
WholeNumber WholeNumber::operator-(const WholeNumber &other) const {
    return WholeNumber(value - other.value);
}

// Binary multiplication operator
WholeNumber WholeNumber::operator*(const WholeNumber &other) const {
    return WholeNumber(value * other.value);
}

// Binary division operator
WholeNumber WholeNumber::operator/(const WholeNumber &other) const {
    if (other.value != 0) {
        return WholeNumber(value / other.value);
    } else {
        cout << "Division by zero error!" << endl;
        return WholeNumber(0);
    }
}

// Binary modulo operator
WholeNumber WholeNumber::operator%(const WholeNumber &other) const {
    if (other.value != 0) {
        return WholeNumber(value % other.value);
    } else {
        cout << "Modulo by zero error!" << endl;
        return WholeNumber(0);
    }
}

// Greater than operator
bool WholeNumber::operator>(const WholeNumber &other) const {
    return value > other.value;
}

// Greater than or equal to operator
bool WholeNumber::operator>=(const WholeNumber &other) const {
    return value >= other.value;
}

// Less than operator
bool WholeNumber::operator<(const WholeNumber &other) const {
    return value < other.value;
}

// Less than or equal to operator
bool WholeNumber::operator<=(const WholeNumber &other) const {
    return value <= other.value;
}

// Equal to operator
bool WholeNumber::operator==(const WholeNumber &other) const {
    return value == other.value;
}

// Not equal to operator
bool WholeNumber::operator!=(const WholeNumber &other) const {
    return value != other.value;
}

// Addition assignment operator
WholeNumber& WholeNumber::operator+=(const WholeNumber &other) {
    value += other.value;
    return *this;
}

// Subtraction assignment operator
WholeNumber& WholeNumber::operator-=(const WholeNumber &other) {
    value -= other.value;
    return *this;
}

// Multiplication assignment operator
WholeNumber& WholeNumber::operator*=(const WholeNumber &other) {
    value *= other.value;
    return *this;
}

// Division assignment operator
WholeNumber& WholeNumber::operator/=(const WholeNumber &other) {
    if (other.value != 0) {
        value /= other.value;
    } else {
        cout << "Division by zero error!" << endl;
    }
    return *this;
}

// Modulo assignment operator
WholeNumber& WholeNumber::operator%=(const WholeNumber &other) {
    if (other.value != 0) {
        value %= other.value;
    } else {
        cout << "Modulo by zero error!" << endl;
    }
    return *this;
}

// Prefix increment operator
WholeNumber& WholeNumber::operator++() {
    value++;
    return *this;
}

// Postfix increment operator
WholeNumber WholeNumber::operator++(int) {
    WholeNumber temp = *this;
    value++;
    return temp;
}

// Prefix decrement operator
WholeNumber& WholeNumber::operator--() {
    value--;
    return *this;
}

// Postfix decrement operator
WholeNumber WholeNumber::operator--(int) {
    WholeNumber temp = *this;
    value--;
    return temp;
}

// Subscript operator
int WholeNumber::operator[](int index) const {
    string value_str = to_string(value);
    if (index >= 0 && index < value_str.size()) {
        return value_str[value_str.size() - 1 - index] - '0';
    }
    return -1;
}

// Static function to check if a number is prime
bool WholeNumber::is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Static function to check if a number is a Fibonacci number
bool WholeNumber::is_fibonacci(int num) {
    int x = 5 * num * num + 4;
    int y = 5 * num * num - 4;
    return is_perfect_square(x) || is_perfect_square(y);
}

// Static function to check if a number is a perfect square
bool WholeNumber::is_perfect_square(int n) {
    int sqrt_n = sqrt(n);
    return (sqrt_n * sqrt_n == n);
}

// Test functions

// Test Part 1: Basic class structure
void WholeNumber::testPart1() {
    WholeNumber wn;
    wn.setValue(10);
    cout << "Value: " << wn.getValue() << endl; // Output should be 10
}

// Test Part 2: Constructors
void WholeNumber::testPart2() {
    WholeNumber wn1;
    WholeNumber wn2(20);
    cout << "Default Constructor Value: " << wn1.getValue() << endl; // Output should be 0
    cout << "Parameterized Constructor Value: " << wn2.getValue() << endl; // Output should be 20
}

// Test Part 3: Stream operators
void WholeNumber::testPart3() {
    WholeNumber wn;
    cout << "Enter a value: ";
    cin >> wn;
    cout << "You entered: " << wn << endl;
}

// Test Part 4: Unary operators
void WholeNumber::testPart4() {
    WholeNumber wn1(10);
    WholeNumber wn2 = +wn1;
    WholeNumber wn3 = -wn1;
    cout << "+wn1: " << wn2 << endl; // Output should be 10
    cout << "-wn1: " << wn3 << endl; // Output should be -10
}

// Test Part 5: Binary operators
void WholeNumber::testPart5() {
    WholeNumber wn1(10);
    WholeNumber wn2(5);
    cout << "wn1 + wn2: " << wn1 + wn2 << endl; // Output should be 15
    cout << "wn1 - wn2: " << wn1 - wn2 << endl; // Output should be 5
    cout << "wn1 * wn2: " << wn1 * wn2 << endl; // Output should be 50
    cout << "wn1 / wn2: " << wn1 / wn2 << endl; // Output should be 2
    cout << "wn1 % wn2: " << wn1 % wn2 << endl; // Output should be 0
}

// Test Part 6: Comparison operators
void WholeNumber::testPart6() {
    WholeNumber wn1(10);
    WholeNumber wn2(5);
    cout << "wn1 > wn2: " << (wn1 > wn2) << endl; // Output should be 1 (true)
    cout << "wn1 >= wn2: " << (wn1 >= wn2) << endl; // Output should be 1 (true)
    cout << "wn1 < wn2: " << (wn1 < wn2) << endl; // Output should be 0 (false)
    cout << "wn1 <= wn2: " << (wn1 <= wn2) << endl; // Output should be 0 (false)
    cout << "wn1 == wn2: " << (wn1 == wn2) << endl; // Output should be 0 (false)
    cout << "wn1 != wn2: " << (wn1 != wn2) << endl; // Output should be 1 (true)
}

// Test Part 7: Assignment operators
void WholeNumber::testPart7() {
    WholeNumber wn1(10);
    WholeNumber wn2(5);
    wn1 += wn2;
    cout << "wn1 += wn2: " << wn1 << endl; // Output should be 15
    wn1 -= wn2;
    cout << "wn1 -= wn2: " << wn1 << endl; // Output should be 10
    wn1 *= wn2;
    cout << "wn1 *= wn2: " << wn1 << endl; // Output should be 50
    wn1 /= wn2;
    cout << "wn1 /= wn2: " << wn1 << endl; // Output should be 10
    wn1 %= wn2;
    cout << "wn1 %= wn2: " << wn1 << endl; // Output should be 0
}

// Test Part 8: Increment and decrement operators
void WholeNumber::testPart8() {
    WholeNumber wn(10);
    cout << "Original: " << wn << endl;
    cout << "Prefix ++: " << ++wn << endl; // Output should be 11
    cout << "Postfix ++: " << wn++ << endl; // Output should be 11
    cout << "After Postfix ++: " << wn << endl; // Output should be 12
    cout << "Prefix --: " << --wn << endl; // Output should be 11
    cout << "Postfix --: " << wn-- << endl; // Output should be 11
    cout << "After Postfix --: " << wn << endl; // Output should be 10
}

// Test Part 9: Subscript operator
void WholeNumber::testPart9() {
    WholeNumber wn(418);
    cout << "wn[0]: " << wn[0] << endl; // Should print 8
    cout << "wn[1]: " << wn[1] << endl; // Should print 1
    cout << "wn[2]: " << wn[2] << endl; // Should print 4
    cout << "wn[3]: " << wn[3] << endl; // Should print -1
}

// Test Part 10: Static functions
void WholeNumber::testPart10() {
    int num1 = 5, num2 = 10;
    cout << num1 << " is prime: " << (WholeNumber::is_prime(num1) ? "true" : "false") << endl;
    cout << num2 << " is prime: " << (WholeNumber::is_prime(num2) ? "true" : "false") << endl;
    cout << num1 << " is fibonacci: " << (WholeNumber::is_fibonacci(num1) ? "true" : "false") << endl;
    cout << num2 << " is fibonacci: " << (WholeNumber::is_fibonacci(num2) ? "true" : "false") << endl;
}
