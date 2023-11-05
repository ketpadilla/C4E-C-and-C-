// * IDE
/*
    Integrated Development Environment - software with a code editor, compiler, debugger, graphical user interface builder and other tools.
*/

// * Natural vs Programming Languages
/*
    natural - languages used between humans
    programming - languages used between computers
        • lexicon - rules for symbols used 
        • syntax - rules for how symbols are combined
        • semantics - rules for what symbols mean

    computers - responds only to a predetermined set of known commands
    instruction list (IL) - complete set of well-known commands; an alphabet of machine language
    machine language - simplest language understood by computers
    high-level language - an intermediate language between humans and computers

    compiler - translates high-level language into machine language
    compilation - process of translating high-level language into machine language
    source code - a program written in a high-level language
    source file - a file containing source code
    executable file - successfully compiled source file (into machine language)

    object file - a file containing compiled source code (not yet executable machine language)
    linking - process of combining multiple object files into a single executable file
    linker - program that performs linking

    International Organization for Standardization (ISO) - sets standards for many things, including programming languages
*/

// * Programs
/* 
    ! Algorithm
    - a structured and semi-formal description of each step of a program

    Preprossor directive 
    * lines of code beginning with #
    - tells the compiler to preprocess the source code
        • include directive - to include a file in the source code
    
    Header files - files containing declarations of functions and variables
    Preprocessor - program that performs preprocessing

    Namespace
    * abstract container for logically grouped entities (blocks)
    - std - standard namespace (contains standard library: namespace std;)

    functions - blocks of code that perform a specific task
        • arguments - values passed to a function
        • results - values returned by a function
        • return - statement that returns results (0 if no errors; 1 if errors)
    
    main() - function that is called when a program starts (required)
    ! template:
        type function_name (type arg1, type arg2, ...) {
            ...
            return result;
        }

    prototype - a function declaration that specifies the function's name, return type, and parameters
        • e.g., type function_name (type arg1, type arg2, ...);
    function body - the code inside a function (between the curly braces "{}")
    semicolon (;) - marks the end of a statement (required for C++)
*/

// * Interpreting Numbers
/* 
    Binary system - used to store and process numbers in computers
        • integers - whole numbers
        • floating-point numbers (floats) - numbers with fractional parts
    
    Conventions:
        1. octal - base 8 (digits 0-7); prefix 0
        2. hexadecimal - base 16 (digits 0-9, A-F); prefix 0x or 0X
        3. binary - base 2 (digits 0-1); prefix 0b or 0B

*/

// * Variables
/* 
    a named container for a value
    exists via a declaration: syntactic structure binding a name to a type and value

    ! template (declaration):
        type variable_name = value;

    assignment operator (=) - initializer; assigns a value to a variable

    variable names for C++:
        • Case-sensitive
        • Must begin with a letter or underscore
        • Can contain letters, digits, and underscores
        • Cannot contain spaces, special characters, or reserved words

    type - a variable's attribute (e.g., int, float, char, bool)
    keyword - a reserved word that has a special meaning in a programming language (e.g., and, do, else, or, void, not)
    comments - text ignored by the compiler

    ! template (beginning of source code):
    (use block commet)
        Program Name
        Author: ...
        Email: ...

        Changes:
        Date: ...
*/

// * Numbers and Operators
/* 
    Scientific notation:
    ! template
        n x 10^m 
            or
        nEm
        
        (where n is a non-zero decimal digit and m is an integer)

    Readable large numbers: 
    ! e.g.,
        from 1000000 to 1'000'000
    
    int - does not store decimal places (can lead to truncation)
    * truncation - the loss of data when a value is converted to a type that cannot hold the original value
    * implementation dependent issue - problem when a program's behavior depends on the implementation of the language
    
    !! Operator - a symbol that represents a specific action
    * Arithmetic: +, -, *, /, %, ++, --
        • dividing by 0 will result in a compilation error and inf (infinitive)
        • exception - an error that occurs during program execution
        • modulus (%) - returns the remainder of a division operation
    
    * hierarchy of operations - C++ uses PEMDAS
    * binding - C++ uses left-to-right binding (calculates from left to right)

    * ++ - increment operator (adds 1 to a variable)
    * -- - decrement operator (subtracts 1 from a variable)
        • post-increment - increments a variable after it is used (e.g., x++)
        • pre-increment - increments a variable before it is used (e.g., ++x)

    * Types of arithmetic operators:
        1. unary - takes one operand (e.g., ++, --)
        2. binary/two-argument - takes two operands (e.g., variable_name += n * 2)
        3. ternary - takes three operands (e.g., variable_name = (n > 0) ? n : -n;)

    !! Character (Char)
        stores a single character; enclosed in single quotes ('') or via ASCII code (e.g., char c = 65;)
        are integers; can be used in arithmetic operations (e.g., 'A' + 1 –> 'B')
    
    • ASCII - system for encoding characters as numbers
    • Unicode - supports more characters than ASCII
    • Literal - a value that appears directly in the source code (e.g., 'A', 100, 3.14) 
    * Escape character - a character that represents a special character 
        1. \n - new line
        2. \' - single quote (the character ')
        3. \\ - backslash (the character \)
        4. \r - carriage return (CR); returns the cursor to the beginning of the line
        5. \a - alert (BEL/bell); sounds a beep
        6. \0 - null character (NUL); marks the end of a string
    
    
*/ 

// * Flow Control (1.6.1.1)