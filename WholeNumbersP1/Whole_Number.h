#ifndef WHOLE_NUMBER_H
#define WHOLE_NUMBER_H

#include <iostream>

using namespace std;

// WholeNumber class definition
class WholeNumber {
private:
    int value; // Private data member to store the value of the whole number

public:
    // Constructors
    WholeNumber(); // Default constructor
    WholeNumber(int newValue); // Parameterized constructor

    // Accessors and Mutators
    int getValue() const; // Accessor function to get the value
    void setValue(int newValue); // Mutator function to set the value

    // Operator overloading
    friend ostream& operator<<(ostream &out, const WholeNumber &wn); // Overload insertion operator
    friend istream& operator>>(istream &in, WholeNumber &wn); // Overload extraction operator

    WholeNumber operator+() const; // Unary plus operator
    WholeNumber operator-() const; // Unary minus operator

    WholeNumber operator+(const WholeNumber &other) const; // Binary addition operator
    WholeNumber operator-(const WholeNumber &other) const; // Binary subtraction operator
    WholeNumber operator*(const WholeNumber &other) const; // Binary multiplication operator
    WholeNumber operator/(const WholeNumber &other) const; // Binary division operator
    WholeNumber operator%(const WholeNumber &other) const; // Binary modulo operator

    bool operator>(const WholeNumber &other) const; // Greater than operator
    bool operator>=(const WholeNumber &other) const; // Greater than or equal to operator
    bool operator<(const WholeNumber &other) const; // Less than operator
    bool operator<=(const WholeNumber &other) const; // Less than or equal to operator
    bool operator==(const WholeNumber &other) const; // Equal to operator
    bool operator!=(const WholeNumber &other) const; // Not equal to operator

    WholeNumber& operator+=(const WholeNumber &other); // Addition assignment operator
    WholeNumber& operator-=(const WholeNumber &other); // Subtraction assignment operator
    WholeNumber& operator*=(const WholeNumber &other); // Multiplication assignment operator
    WholeNumber& operator/=(const WholeNumber &other); // Division assignment operator
    WholeNumber& operator%=(const WholeNumber &other); // Modulo assignment operator

    WholeNumber& operator++(); // Prefix increment operator
    WholeNumber operator++(int); // Postfix increment operator
    WholeNumber& operator--(); // Prefix decrement operator
    WholeNumber operator--(int); // Postfix decrement operator

    int operator[](int index) const; // Subscript operator

    // Static functions
    static bool is_prime(int num); // Static function to check if a number is prime
    static bool is_fibonacci(int num); // Static function to check if a number is a Fibonacci number
    static bool is_perfect_square(int n); // Static function to check if a number is a perfect square

    // Test functions
    static void testPart1();
    static void testPart2();
    static void testPart3();
    static void testPart4();
    static void testPart5();
    static void testPart6();
    static void testPart7();
    static void testPart8();
    static void testPart9();
    static void testPart10();
};

#endif // WHOLE_NUMBER_H
