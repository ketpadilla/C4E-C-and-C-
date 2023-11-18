// * EXCEPTIONS
/*
    a data of any type that is thrown from a function to indicate that an error has occurred
    * #include <exception>

    Murphy's Laws - an error-free code is insufficiently tested

    ! EOF (End of File)
    special character; indicates the end of a file
    - available in the <iostream> library

    * Program exist immediately and rises an exception if it encounters an error (returns false)

    TYPES
        ! Logic Error
            raises exceptions related to program logic (algorithm, etc.)

        ! Runtime Error
            raises exceptions related to runtime (memory, etc.)

    ANATOMY
        constructuor
        virtual destructor (originally empty)
        virtual function "what()"

    * try-catch block
    used to catch and handle exceptions 

    * throw
    used to throw an exception and create a custom error message

    ! Program will abort if an exception is not handled

    * noexcept
    used to indicate that a function will not throw an exception

    * explicit
    used to indicate that a constructor will not be used for implicit conversions

    ! #include <stdexcept>
    used to include standard exceptions

        * domain_error
            raise exceptions when data exceeds permitted range

        * invalid_argument
            raise exceptions when improper arguments are passed

        * length_error
            raise exceptions when using illegal values to specify size

        * out_of_range
            raise exceptions when using illegal index values

        * runtime_error
            raise exceptions when errors occur during program execution
            
            unpreventable errors

        * range_error
            raise exceptions when receiving a computed value that is outside permissible range

        * overflow_error
            raise exceptions when a computation exceeds the largest value that can be stored

        * underflow_error
            raise exceptions when a computation exceeds the smallest value that can be stored

        * bad_alloc
            raise exceptions when memory allocation fails
*/

