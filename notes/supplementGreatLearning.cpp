// This is a single line comment

/* This is a multi-line comment
   that spans multiple lines */

// * C++
/*
    • A programming language of the C family
    • Compiled language
    • Supports object-oriented programming and pointers
    • Case-sensitive
    • Platform dependent
    • Machine independentx
*/

// * Syntax
/* 
    #include <iostream>  //! header with input/output stream declarations
    #include <string>   //! header with string types
    using namespace std; //! using standard namespace
    int main() {        //! function declaration (main function placed at the end)
        cout << "Hello World!"; 
        return 0;
    }
*/

// * Variables
// General syntax: type variable_name = value;
/* Types:
    1. local - declared inside a function
    2. global - declared outside a function; accessible to all functions
    3. static - declared with static keyword
    4. extern - declared with extern keyword
*/

// * Printing
/*
    • cout << "Hello World!"; (faster)
    • printf("Hello World!");
    • \n or endl for new line
*/ 
// Sample program:
#include <iostream>
using namespace std;

int sample() {
    cout << "Hello World!" << endl; 
    printf("Hello C++!\n");
    return 0;
}

// * User Input/Output
/*
    cin - takes input (syntax: cin >> variable_name)
    cout - prints output (syntax: cout << variable_name)
*/

// * Data Types
/*
    ! Predefined
        • int - integer (4 bytes)
        • float - floating point number (4 bytes)
        • double - floating point number (8 bytes)
        • char - character (1 byte)
        • string - sequence of characters
        • bool - boolean (true or false)

    ! Derived
        • array - collection of similar data items
        • pointer - variable that stores address of another variable
        • reference - alias for a variable

    ! User defined
        • structure - collection of different data types
        • class - collection of different data types and functions
        • union - collection of different data types but only one can be used at a time
        • enum - collection of integral constants

    ! Modifiers
        • signed - can hold both positive and negative values
        • unsigned - can hold only positive values
        • short - half the size of int
        • long - twice the size of int 
        • long long - twice the size of long
        • long double - twice the size of double

    ! Type Casting
        syntax: (type)variable_name)
*/

// * Control Statements
/*  
    ! If-else
        if (condition) {
            ...
        } else if (condition) {
            ...
        } else {
            ...
        }

    ! Switch
        switch (variable_name) {
            case value1:
                ...
                break;
            case value2:
                ...
                break;
            default:
                ...
        }

    ! Loop
        for (initialization; condition; increment/decrement) {
            ...
        }

        while (condition) {
            ...
        }

        while (True) { // ! infinite loop
            ...
        }

    * initialization: int i = 0
    * condition: i < n
    * increment/decrement: i++ or i-- (i += n or i -= n)
*/

// * Operators
/* 
    ! Arithmetic
        • +, -, *, /, %, ++, --
    
    ! Relational
        • ==, !=, >, <, >=, <=
    
    ! Logical
        • && - AND
        • || - OR
        • ! - NOT
    
    ! Bitwise
        • & - AND
        • | - OR
        • ^ - XOR
        • ~ - NOT
        • << - left shift
        • >> - right shift
    
    ! Assignment
        • = - assign
        • += - add and assign
        • -= - subtract and assign
        • *= - multiply and assign
        • /= - divide and assign
        • %= - modulus and assign
        • <<= - left shift and assign
        • >>= - right shift and assign
        • &= - AND and assign
        • ^= - XOR and assign
        • |= - OR and assign
*/

// * Strings
/*
    ! Declaration
        • string variable_name = "string";
        • char variable_name[] = "string";

    ! Concatenation
        • string1 + string2
        • string1.append(string2)
    
    ! Functions
        !! header: #include <string>
        • length() - returns length of string
        • append() - appends string to another string
        • insert() - inserts string into another string
        • erase() - erases string from another string
        • replace() - replaces string with another string
        • find() - finds string in another string
        • substr() - returns substring of string
        • compare() - compares two strings
        • empty() - checks if string is empty
        • c_str() - converts string to C-style string
        • at() - returns character at specified position
        • front() - returns first character of string
        • back() - returns last character of string
        • push_back() - adds character to end of string
        • pop_back() - removes character from end of string
        • swap() - swaps two strings
*/

// * Arrays
/*
    same data type for all elements

    ! Declaration
        • Dynamic
            type array_name[size];
        • Static 
            type array_name[] = {value1, value2, ...};
            type array_name[size] = {value1, value2, ...};

    ! Accessing elements
        • array_name[index]
    
    ! Functions
        !! header: #include <array>
        • size() - returns size of array
        • empty() - checks if array is empty
        • at() - returns element at specified position
        • front() - returns first element of array
        • back() - returns last element of array
        • data() - returns pointer to first element of array
        • fill() - fills array with specified value
        • swap() - swaps two arrays

    ! Multidimensional arrays
        type array_name[size1][size2]...[sizeN];
        • e.g., 2D: array_name[row][column]
*/

// * Functions
/*
    ! Declaration
        return_type function_name(parameter1, parameter2, ...) {
            ...
        }

        • parameter - type variable_name

    ! Calling
        function_name(argument1, argument2, ...)

        • argument - a value or variable

    ! Return
        return value;

        • 0 - successful termination
        • 1 - unsuccessful termination
*/

// * Pointers
/* 
    stores address of another variable

    ! Declaration
        type *variable_name;
    
    ! Initialization
        type *variable_name = &another_variable_name;
*/ // Sample program:
#include <iostream>
using namespace std;

int address() {
    int x = 10;
    int *ptr = &x;

    // Print address of x
    cout << "Address of x: " << ptr << endl;

    return 0;
}

// * Classes
/*
    blueprint for creating objects
    • object - instance of a class; real world entity

    ! Declaration
        class class_name {
            access_specifier:
                data_type variable_name;
                return_type function_name(parameter1, parameter2, ...) {
                    ...
                }
        };

        • access_specifier - public, private, or protected
        • parameter - type variable_name

    ! Accessing members
        object_name.member_name

    ! Access specifiers
        • public - accessible to all
        • private - accessible only to members of the same class
        • protected - accessible to members of the same class and its subclasses

    ! Constructors
        class class_name {
            public:
                class_name() {
                    ...
                }
        };

        • default - no parameters
        • parameterized - with parameters

    ! Destructors
        class class_name {
            public:
                ~class_name() {
                    ...
                }
        };

    ! Inheritance
        class derived_class_name: access_specifier base_class_name {
            ...
        };

        • class aqcuired properties of another class
        • super/base class - class whose properties are inherited
        • sub/derived class - class that inherits properties of another class

    ! Polymorphism
        • Overloading - same function name but different parameters
        • Overriding - same function name and parameters but different implementation

    ! Abstraction
        • Hiding implementation details
        • Accessing members through public functions

    ! Encapsulation
        • Wrapping data and functions into a single unit
        • Data hiding
*/ // Sample program:
#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int age;
        int roll_no;
        void print() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll No.: " << roll_no << endl;
        }
        Student(string n, int i, int j) { // parametized; easier initialization
            name = n;
            age = i;
            roll_no = j;
        
        }
};

// Call sample programs
int main() {
    // Call sample() function
    sample();

    // Call address() function
    address();

    // Create and print object
    Student s1 = Student("John", 20, 1);
    s1.print();

    return 0;
}