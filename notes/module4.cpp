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

// * String
// a set of characters
/* 
    # not an in-built data type in C++
    ! #include <string>

    # uses double quotes ("") to initialize a string literal
    # can optionally use assignment operator (=)
        e.g., 
            string name = "John Doe" -> assigning
            string name("John Doe") -> functional

    * Concatenation
    joining of two or more strings using "+" or "+="
        e.g., 
            a = "Hello ";
            b = a + "World!";
            cout << a -> "Hello World!"

            a = "Hello ";
            b += "World!";
            cout << a -> "Hello World!"

        ! will not concatenate literal strings
            e.g., 
                cout << "Hello " + "World!" -> error

    * Inputting
    cin treats spaces as delimiters (white characters)
        
        ! Delimiters
        characters that separate words in a string
        cin will stop reading when it encounters a delimiter
    
    use function "getline()" to read a string with spaces
        e.g., 
            string name;
            getline(cin, name);

    * Comparisons
    logical operators can be used to compare strings
    ! alternative: .compare() 
        e.g., 
            string account = "John Doe";
            string password;

            cout << "Enter password: ";
            getline(cin, password);

            if (account.compare(password) == 0)
                cout << "Access granted!";
            else
                cout << "Access denied!";

        * "== 0" -> str1 == str2
        * "> 0" -> str1 > str2
        * "< 0" -> str1 < str2
    
    * Substrings
    parts of a string
    ! function: .substr()
        e.g., 
            string name = "John Doe";
            string first_name = name.substr(0, 4);
            string last_name = name.substr(5, 3);

        * parameters: (start, length)
            ! start: starting index of the substring
            ! length: number of characters to be extracted
        
        * if length is not specified, the substring will be from start to the end of the string

    * Exception
    an error that occurs during the execution of a program
    occurs when the program is unable to perform an operation

    * Finding Substrings
    ! function: .find()
        e.g., 
            string name = "John Doe";
            int index = name.find("Doe");

        * returns the index of the first character of the substring
        * returns -1 if the substring is not found
        
    * Capacity 
    ! function: .capacity()
        e.g., 
            string name = "John Doe";
            cout << name.capacity();

        * returns the number of characters that can be stored in the string
        * returns the size of the string if the string is not empty
    
    ! function .max_size()
        alternative to .capacity()

    ! function .reserve()
        specifies the capacity of a string

    * Modifying
    ! function .clear()
        removes all characters from the string

    ! function .resize()
        changes the size of the string
        e.g., 
            string name = "John Doe";
            name.resize(4);
            cout << name -> "John"

        * if the new size is larger than the current size, the string is padded with null characters

    ! function .empty()
        checks if the string is empty
        returns true if the string is empty, false otherwise

    ! function .lenght()
        returns the number of characters in the string
    
    ! function .size()
        alternative to .lenght()
    
    ! function .append()
        adds characters to the end of the string
        alternative to concatenation

    ! function .push_back()
        adds a character to the end of the string
        e.g., 
            string name = "John Doe";
            name.push_back('!');
            cout << name -> "John Doe!"
        
    ! function .insert()
        inserts characters into the string
        e.g., 
            string name = "John Doe";
            name.insert(5, "Smith");
            cout << name -> "John Smith Doe"

        * parameters: (index, string)
            ! index: index of the character to be inserted
            ! string: string to be inserted
        
    ! function .assign()
        assigns a new value to the string
        e.g., 
            string name = "John Doe";
            name.assign("Jane Doe");
            cout << name -> "Jane Doe"
        
    ! function .replace()
        replaces characters in the string
        e.g., 
            string name = "John Doe";
            name.replace(5, 3, "Smith");
            cout << name -> "John Smith Doe"

        * parameters: (index, length, string)
            ! index: index of the first character to be replaced
            ! length: number of characters to be replaced
            ! string: string to be inserted

    ! function .erase()
        removes characters from the string
        e.g., 
            string name = "John Doe";
            name.erase(5, 3);
            cout << name -> "John"
        
        * parameters: (index, length)
            ! index: index of the first character to be removed
            ! length: number of characters to be removed

    ! function .swap()
        swaps the contents of two strings
        e.g., 
            string name1 = "John Doe";
            string name2 = "Jane Doe";
            name1.swap(name2);
            cout << name1 -> "Jane Doe"
            cout << name2 -> "John Doe"
*/

// * NAME SPACES
// a space that has names with unambiguous and clear meanings
/*
    * Name Conflict
    occurs when two or more names are used for different entities

    ! std
    a namespace that contains the standard library
        * using namespace std;

    "std::" is used to access the standard library when not using the "using namespace std;" statement
        e.g., 
            std::cout << "Hello World!";
            std::cin >> name; 

    * Defining a Namespace
    ! template
        e.g., 
            namespace name {
                ...
            }

        usage applies as with std

    * Selective Using Declaration
    allows the programmer to use only the names that are needed from a namespace
        e.g., 
            namespace name1 {
                function() {
                    ...
                }
            }

            namespace name2 {
                function() {
                    ...
                }
            }

            int main() {
                {
                    using namespace name1;
                    function();

                    ! uses function() from name1
                }
                    
                {
                    using namespace name2;
                    function();

                    ! uses function() from name2
                }
            }

    * Extending a Namespace
    allows the programmer to add names to an existing namespace
        e.g., 
            namespace name {
                function1() {
                    ...
                }
            }

            namespace name {
                function2() {
                    ...
                }

                ! this is an extension namespace
            }

            using namespace name;
            int main() {
                function1();
                function2();
            }
    
    * Using an Entity
    selects the entity to be used from a namespace
        e.g., 
            namespace name {
                function1() {
                    ...
                }

                function2() {

                }
            }

            using name::function1;

            int main() {
                function1();
                function2(); -> error
            }

            ! other entities can be used using "::" (scope resolution operator)

    * Anonymous Namespace
    a namespace that does not have a name
    will be implicitly and automatically used

    * Renaming Namespace
    allows the programmer to rename a namespace
    ! the method is aliasing; both names are still valid
        e.g., 
            namespace name1 {
                function() {
                    ...
                }
            }

            namespace name2 = name1;
            
*/