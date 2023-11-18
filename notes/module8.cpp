// * OPERATORS AND ENUMERATED TYPES

// * Operator
// symbol designed to do a specific task on data
/*
    Operand
        the data that the operator works on
        e.g., 5 + 6
            5 and 6 are operands
            + is the operator

    TYPES BY NUMBER OF OPERANDS
        ! Unary
            operates on one operand
                e.g., ++, --, -, +, !, ~, &, *, sizeof, (type), new, delete

        ! Binary
            operates on two operands
                e.g., +, -, *, /, %, <<, >>, <, >, <=, >=, ==
        
        ! Ternary
            operates on three operands
                e.g., ?:

    TYPES BY LOCATION
        ! Prefix
            operator is placed before the operand
                e.g., ++x, --x, -x, +x, !x, ~x, *x, &x, sizeof x, (type)x

        ! Postfix
            operator is placed after the operand
                e.g., x++, x--, x[i], x->m, x.m, x(x)
        
        ! Infix
            operator is placed between the operands
                e.g., x + y, x - y, x * y, x / y, x % y, x << y

    * OVERLOADED OPERATORS
    operators that can be used with more than one type of operand
    
    treated as functions

    * "operator" KEYWORD
    used to define overloaded operators
    
    implementation:
        - as a member function of a class
        - as a 'standalone' function
*/

// * ENUMERATED TYPES
// a type whose values are defined by a list of identifiers
/*
    ! #define
    defines a symbolic name to represent a value
        e.g., #define PI 3.14159

        * syntax:
            #define symbol  value
    
    ! enum
    defines a type with a list of symbolic names representing values starting at 0
        e.g., enum color { red, 
                           green, 
                           blue };

        * syntax:
            enum type_name { symbol1, 
                             symbol2, 
                             ... };

    * all symbols must be unique across a namespace
*/

// * OVERLOADED OPERATORS
// operators that can be used with more than one type of operand
/*
    number of arguments is fixed

    new operators cannot be created
    priority of redefined operators cannot be changed
    cannot work with standard data types


    * Operators that cannot be implemented as a member function
        1. Assignment
        2. Compound assignment
        3. Pre/postfix increment and decrement
        4. Subscript
        5. Function invocation

    * Non-overladable operators
        1. ?: (conditional)
        2. .  (member selection)
        3. :: (scope resolution)
        4. sizeof 
*/