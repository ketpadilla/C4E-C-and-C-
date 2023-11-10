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
*/

// ! 3.5.1.1 Transfoerring data to and from functions