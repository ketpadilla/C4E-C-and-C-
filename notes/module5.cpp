// * OBJECT-ORIENTED PROGRAMMING 
/*
    Procedural programming focused on creating reusable functions (procedures).
    ! Object-oriented programming (OOP) focuses on creating and expanding reusable classes.

    Class Components:
        * Name
        * Properties (attributes/variables)
            traits; data
        * Methods (behaviors/functions)
            actions; operations

    ! Class 
        a blueprint for creating objects
        an aggregate of objects that share common structure and behavior
        
        * Types by Hierarchy:
            1. Superclass (base class)
                the class that is being inherited from; more general
            2. Subclass (derived class)
                the class that is inheriting properties from the superclass; more specific
    
    ! Objects
        an instance of a class

        * Types by Access:
            1. Public
                accessible to all
            2. Private
                accessible only to the class
            3. Protected
                accessible to the class and its subclasses

    ! Inheritance
        the process of creating new classes from existing classes
        the new classes (sub) inherit the properties of the existing classes (super)

    ! Declaration (identifier: class)
        class name();
*/


// * STACK
// structures that stores datas in a last-in, first-out (LIFO) manner
// an object of push (place new data on top of the stack) and pop (remove data from the top of the stack) operations
/*
    * Procedural Approach:
        1. Initialize a vector named "stack"
        2. Initialize a variable named SP (stack pointer) == 0
        3. Define a function named push that takes an integer as an argument
            3.1. place the integer at the SP index of the stack
            3.2. increment SP by 1
        4. Define a function named pop that returns an integer
            4.1. decrement SP by 1
            4.2. return the integer at the SP index of the stack

            e.g.,   
                int stack[100];
                int SP = 0;

                void push(int value) {
                    stack[SP++] = value;
                }

                int pop() {
                    return stack[--SP];
                }

                int main() {
                    push(3);
                    push(2);
                    push(1);
                    cout << pop() << endl;
                    cout << pop() << endl;
                    cout << pop() << endl;
                }

    ! Encapsulation
        processing to selecting data that will be accessible and hidden (protected) from the user

    ! Template
        a generalized, parameterized class

    ! Constructor
        a special method that is called when an object is created
        used to initialize the object's data
    
    * Object-oriented Approach
        1. Initialize a class named "stack"
        2. Initialize a private integer array named "stackstore" with size n
        3. Initialize a private integer named "SP"
        4. Initialize a public function named "push" that takes in data as an argument
        5. Initialize a public function named "pop" that returns a data point
        6. Initialize a constructor that takes sets SP to 0

            e.g.,
                class Stack {
                    private:
                        ! attributes
                        int stackstore[100];
                        int SP;

                    public:
                        ! constructor
                        Stack() {
                            SP = 0;
                        }

                        ! methods
                        void push(int value) {
                            stackstore[SP++] = value;
                        }

                        int pop() {
                            return stackstore[--SP];
                        }
                }

        * functions may be defined outside of the class using the scope resolution operator (::)
            e.g., void Stack::push(int value) { ... }

    ! Inheritance (Example)
        * use the colon (:) to indicate inheritance
        ! template:
            class Subclass : Superclass {
                ...
            }

        e.g., 
            class AddingStack : Stack {
                private:
                    int sum;

                public:
                    AddingStack() : Stack() {
                        ! ^ superclass constructor is called before the subclass constructor
                        sum = 0;
                    }

                    void push (int value) {
                        sum += value;
                        push(value);
                    }

                    int pop() {
                        int value = pop();
                        sum -= value;
                        return value;
                    }

                    int getSum() {
                        return sum;
                    }
            }
*/


// * CLASS COMPONENTS
/*
    ! Access specifiers
        * public
            accessible to all
        * private
            accessible only to the class
        * protected
            accessible to the class and its subclasses
    
    * Overriding class components
        functions override a component by introducing a new component with the same name 
        may only be accessed qualification: using the scope resolution operator (::)

    ! "this" pointer
        a pointer that points to the current object
        used to access the object's data and methods

    * Overloading functions
        function overload is possible by introducing a new functions with the same names but different parameters
        may only be accessed qualification: using the scope resolution operator (::)

        ! constructors may also be overloaded

    ! Copying constructors
        a constructor that takes in an object of the same class as an argument
        used to copy the data of the argument object to the new object

    ! Memory leaks
        a memory leak occurs when a program does not release memory that is no longer needed
        may be avoided by using the delete operator to free memory

    ! Destructors
        a special method that is called when an object is destroyed
        used to free memory and perform other cleanup tasks

        ! template:
            ~Classname() {
                ...
            }

            e.g.,
                class Stack {
                    private:
                        ...

                    public:
                        ...

                        ~Stack() {
                            delete[] stackstore;
                        }
                }    
*/

// * STATIC COMPONENTS
/*
    ! Automatic variables
        are automatically created and destroyed during execution
        default type of variables

    ! Static variables
        continue to exist during the entire execution
        use "static" keyword to declare a static variable

            e.g.,
                static int count = 0;
    
    ! Static components of classes
        components that exist during the entire execution
        all instances of the class share the same static components
        usually used as counters
        * may only be initialized outside of the class

    ! Static functions
        functions that exist during the entire execution

    * Static functions may call other static functions
    * Static functions may not call non-static functions
    * Non-static functions may call both static and non-static functions
*/


// * POINTERS
/*
    Objects may appear on demand

    * Stack (memory)
        a region of memory that stores automatic entities

    * Heap
        a region of memory that stores entities created on demand

    ! Use "->" (arrow operator) to access the components (variables and functions) of a pointer
        e.g., 
            class name {
                ...
            }

            Class *ptr = new Class();
            ptr -> value = 0;
            cout << ++(ptr -> value) << endl;
            delete ptr;

    ! An object of any class may be the field of an object of any other class
        i.e., a class may contain an object of another class as a field (variable)
*/