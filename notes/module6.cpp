// * INHERITANCE
/*
    * subclass = derived class
    * superclass = base class

    ! SINGLE INHERITANCE
    subclass derived from a single base class

    ! MULTIPLE INHERITANCE
    subclass derived from multiple base classes

        * Template
        for derived class Z and base class X and Y:
        
            class Z : X, Y {
                ...
            }

            * all public components of X and Y will be private in Z
            * visibility specifier can be used to change this
            
                class Z : public X, private Y {
                    ...
                }       

            ! subclasses will not inherit base class private components
            ! having protected components instead will allow subclasses to inherit them while still keeping them private to other classes
    
    Therefore, the TYPES OF CLASS COMPONENTS are:
        * public
        * private
        * protected
    
    * Inheritance Table
        Component Declared | Inherited by derived class  | Accessible by derived class
        public             | public                      | public
        protected          | public                      | protected
        private            | public                      | none
        
        public             | protected                   | protected
        protected          | protected                   | protected
        private            | protected                   | none

        public             | private                     | private
        protected          | private                     | private
        private            | private                     | none

    * Error-prone and obfuscating class hierarchy
    technique of using multiple inheritance to create a class hierarchy that is error-prone and obfuscating (confusing)
        ! it is better not to use multiple inheritance
*/


// * TYPE COMPATIBILITY
// each class is a new data type
/*
    incompatible objects causes compiler errors
    ! superclass objects are compatible with subclass objects
    ! subclass objects are NOT compatible with superclass objects
    ! objects of different classes are NOT compatible with each other

    not recommended: static_cast can be used to convert a superclass object to a subclass object
        * alternative: dynamic_cast
*/


// * POLYMORPHISM
// method to override superclass components without touching the superclass
/*
    ! OVERRIDE
    when a subclass redefines a superclass component, overriding it and becoming polymorphic
    
    Downcasting - cast from superclass to subclass
    Uppercasting - cast from subclass to superclass

    ! "virtual" keyword
    used to indicate that a component is overridden and polymorphic
*/


// * OBJECTS AS PARAMETERS AND DYNAMIC CASTING
/*
    objects may be passed as parameters to functions via pointers or references
    functions may be passed as parameters to objects

    ! dynamic_cast
    casts from superclass to subclass and vice versa
    uses the pointer of the objects to cast
        * format: dynamic_cast<subclass*>(superclass*)

    ! try-cast statement
    used to check if a cast is successful
        * format: 
            try {
                dynamic_cast<subclass*>(superclass*)
            } catch (bad_cast) {
                ...
            }
*/


// * SUPPLEMENTS
/*
    ! COPYING CONSTRUCTORS
    a constructor that creates a new object from an existing object
        * format: 
            name(name &source) {
                ...
            }
    
    ! COMPOSITION
    building a class from other classes
        * format: 
            class A {
                ...
            }

            class B {
                private:
                    A a;
                ...
            }
*/  

//! 2.6.1.1 The const keyword

