// * POINTERS
/*
    * used to store the address of a variable
    * cannot store literal values besides 0
    
    ADDRESS 
        an attribute of a variable that indicates where (location) it is stored in memory
        * value is also an attribute; the data stored in the memory location

    ! Declaration
    type *pointer_name;

    AMORPHOUS POINTERS
        point to any type of data
        - uses "void" as the type

    NULL POINTER
        assigned a value of 0
        * alternative: nullptr (empty null pointer: constant)

    ! Initialization
    type *pointer_name = &variable_name;

        use the reference operator (&) to assign the address of a variable to a pointer

    ! DEREFERENCE
        operation that accesses the value stored in the memory location pointed to by a pointer
        uses the dereference operator (*)
        - does not change the value of the pointer

        e.g., 
            int var = 5;
            int *ptr = &var;
            cout << *ptr << endl; // prints 5

            int var, *ptr;
            var = 5; 
            ptr = &var; // ! * may be omitted if pointer is already declared
            cout << *ptr << endl; // prints 5

    sizeof()
        a unary prefix operator [i.e., sizeof(name)]
        returns the size of a variable/literal/expression in bytes
*/

// * POINTERS AND VECTORS
/*
    pointers can act like vecotrs
    * can be used to access the elements of a vector

    data()
        suffix operator [i.e., name.data()]
        returns the address of the first element in a vector

        alterative: &name[0]

    arithmetic of pointers (ptr)
        • ptr + int = ptr
        • ptr - int = ptr
        • ptr1 - ptr2 = int
        • pt1 == ptr2 = bool

        * can increment/decrement a pointer by an integer

    accessing vector elements
        ! template
            *(pointer + offset) 
                or
            pointer[offset]

        offset can be synonymous to index
*/

// * FUNCTIONS
/*
    a block of code that performs a specific task or evaluation
    - takes in parameters (input) and returns a value (output)

    TRAITS:
        • name
        • return type
        • parameters
    
    TYPES
        • predefined/library 
        • user-defined

    DECOMPOSITION
        process of dividing problems/programs into parts

        approaches:
            ! top-down
                definte the most general functions first
                then, divide them into simpler/more specific functions
            ! bottom-up
                define the most specific functions first
                then, combine them into more general functions
    
    FUNCTION DECLARATION 
        i.e., function prototype
        • function definition - prototype + body (code)

        ! template
            prototype:
                type name(type1 parameter1, type2 parameter2, ...);

            definition:
                type name(type1 parameter1, type2 parameter2, ...) {
                    ...
                }

    TYPES OF PARAMETERS
        ! Formal – defined within the function definition
        ! Actual – arguments; passed to the function when it is called

    * functions may be placed after the main function if they are declared before it
        e.g.,
            type function();

            int main() {
                function();
                return 0;
            }

            type function() {
                ...
            }

    * non-void type functions must have at least one return
    * void type functions may optionally have a return
    
    ! Local Variables
        - declared and only accessible within a function
    ! Global Variables
        - declared outside of a function; accessible to all functions

    Function can change the value of the arguments passed to it by reference:
        ! use the reference operator (&) in the function definition
        e.g., 
            void swap(int &a, int &b) {
                int temp = a;
                a = b;
                b = temp;
            }

            int main() {
                int x = 5, y = 10;
                swap(x, y);
                cout << x << " " << y << endl; // prints 10 5
                return 0;
            }
        
        ! pointers can also be used to change the value of the arguments passed to it
        e.g.,
            void swap(int *a, int *b) {
                int temp = *a;
                *a = *b;
                *b = temp;
            }

            int main() {
                int x = 5, y = 10;
                swap(&x, &y);
                cout << x << " " << y << endl; // prints 10 5
                return 0;
            }

    Default Parameters - parameters that are given a default value
        ! must be placed at the end of the parameter list
        e.g.,
            void function(int a, int b = 5) {
                ...
            }

            int main() {
                function(10); // b = 5
                function(10, 20); // b = 20
                return 0;
            }
    
    ! Function inlining - process of compiling function invocations, creating unline functions
        * use the keyword "inline" before the function declaration
        e.g.,
            inline int function(int a, int b) {
                ...
            }

            int main() {
                function(10, 20);
                return 0;
            }
        
        advantage: faster execution time
        disadvantage: larger executable file

        cannot be used for functions with return values, loops, switch statements, recursion, and static variables
    
    ! Overloaded functions - functions with the same name but different parameters
        must be clearly distinguishable to the compiler (i.e., different number of parameters or different types of parameters)
        e.g., 
            int function(int a, int b) {
                ...
            }

            int function(int a, int b, int c) {
                ...
            }

            int main() {
                function(10, 20); // calls the first function
                function(10, 20, 30); // calls the second function
                return 0;
            }
    
    !! Tenary Conditional Operator (?:) - operator that takes three operands
        ! template
            condition ? expression1 : expression2

        if condition is true, expression1 is evaluated
        if condition is false, expression2 is evaluated

        e.g.,
            int x = 5, y = 10;
            int z = (x > y) ? x : y; // z = 10

            int x = 5, y = 10;
            int z = (x < y) ? x : y; // z = 5
*/

// * SORTING
// algorithm that arranges a list of items in a specific order
/*
    e.g.,
        ! Bubble Sort
            * repeatedly compared adjacent elements and swaps them if they are in the wrong order
            notation: 
                best case: O(n)
                worst case: O(n^2)
                average case: O(n^2)    
*/

// * VOID
// indicates that a function does not return a value

// * MEMORY ON DEMAND
/*
    new - allocates memory for a variable
    delete - deallocates memory for a variable (must be used with new)

    e.g., 
        int *ptr = new int;
        *ptr = 5;
        cout << *ptr << endl; // prints 5
        delete ptr;
        cout << *ptr << endl; // prints garbage value
*/