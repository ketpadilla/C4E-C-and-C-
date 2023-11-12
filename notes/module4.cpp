// * ARRAYS OF POINTERS
/*
    STEPS:
        1. initialize a pointer to pointer using "**"
            ! type **name;

        2. allocate memory for a pointer to pointer
            ! name = new type*[rows];

        3. allocate memory for each row
            ! for (int i = 0; i < rows; i++)
            !     name[i] = new type[columns];

    * Triangular Matrices
    a matrix with rows of different lengths, where the number of columns in each row is equal to the row number
*/

// * CONVERSION
// to convert the type of a data item to another
/* 
    TYPES:
        * Automatic/implicit
            data type is converted automatically as needed
        * Explicit
            typecasting; data type is converted by the programmer
            ! static_cast<type>(expression) -> recommended (static casting)
            ! (type)expression -> old style (C-style casting)
    
    disadvantage: lenght of memory representation may not always stay the same, chaging the value of the data item
    ^ issue: truncation (loss of precision)

    * Promotion
        conversion of a data item to a larger data type (done on automatic conversion)
        ! int -> float
        ! char -> int
        ! short -> int
        ! float -> double
*/

// ! 4.3.1.1 Strings - the basics