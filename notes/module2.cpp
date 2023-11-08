// * Conditionals (Cont.)
/* 
    * ADVANCED CONDITIONALS
    if (true/false condition) {
        ! code to run if condition is true
    } else {
        ! code to run if condition is false
    }

    * NESTED CONDITIONALS
    if (condition) {
        if (condition) {
            ! code to run if both conditions are true
        } else {
            ! code to run if the first condition is true and the second is false
        }
    } else {
        ! code to run if the first condition is false
    }

    * CASCADED CONDITIONALS
    if (condition) {
        ! code to run if condition is true
    } else if (condition) {
        ! code to run if the first condition is false and the second is true
    } else {
        ! code to run if both conditions are false
    }
*/

// * Variable Modifiers
/*
    INT
        ! long
        declare a variable as a longer integer type (-2,147,483,648 to 2,147,483,647)
        ! short
        declare a variable as a shorter integer type (-32,768 to 32,767)
        ! unsigned 
        declare a variable as a non-negative integer type (0 to 4,294,967,295)
        
        * modifiers can be combined
        * "int" may be omitted
    
    CHAR
        ! unsigned
        declare a variable as a non-negative character type (0 to 255)
        ! signed (default)
        declare a variable as a signed character type (-128 to 127)

        * "char" may not be omitted

    FLOAT
        ! double 
        declare a variable as a double-precision floating point type (sigfigs: 15-17
        ! long double
        declare a variable as a longer double-precision floating point type (sigfigs: 33-36)
        
        * appending "f" or "F" to a literal will declare it as a float
        (e.g., 3.1515f)        

    * Numerical Anomaly
    phenomenon where adding/subtracting floats results in no change
*/

// * Loops 
/* 
    ! Pseudo-code
    notation resembling a simplified programming language
    used to represent the logic of an algorithm

    * types
        1. while
            while (condition) {
                ! code to run while condition is true
            }
            
        2. infinite
            while (true) {
                ! code to run forever
            }
        
        3. do-while
            do {
                ! code to run at least once
            } while (condition);
        
        4. for 
            for (initialization; condition; increment) {
                ! code to run while condition is true
            }

            initialization: int i = 0;
            condition: i < n;
            increment: i++

        5. infinite for
            for (;;) {
                ! code to run forever
            }
        
            (;;) is equivalent to 1 or (true)
    
    * break and continue
        break - exit a loop
        continue - skip to the next iteration of a loop

*/

// * Boolean
/*
    * logical operators
        1. && - and (both conditions must be true)
        2. || - or (disjunction; at least one condition must be true)
        3. ! - not (negation; inverts a condition)
            e.g.,
                !(variable <= 0) : variable > 0
                !(variable == 0) : variable != 0
                !(p && q) : !p || !q
                !(p || q) : !p && !q

    * bitwise operators (operates on "1"s and "0"s)
        1. & - and
        2. | - or
        3. ^ - xor (exclusive or): requires only one "1" to produce "1"
        4. ~ - not: requires "0" to produce "1" and "1" to produce "0"

    * shift operators
    only works on integers
        1. << - left shift (multiplies by 2)
        2. >> - right shift (divides by 2)

    * bit shifting
        1. logical - shifts bits and fills in the empty bits with 0s
        2. arithmetic - shifts bits and fills in the empty bits with the sign bit
*/ // ! Sample Program
#include <iostream>
using namespace std;

int main() 
{
	int w_sign = -8;
	unsigned wo_sign = 4;

	int var_s;
	unsigned var_u;

	/* equivalent to division by 2 –> var_s == -4 */
	var_s = w_sign >> 1;
	cout << var_s << endl;

	/* equivalent to multiplication by 4 –> var_s == -32 */
	var_s = w_sign << 2;
    cout << var_s << endl;
	
	/* equivalent to division by 4 –> var_u == 1 */
	var_u = wo_sign >> 2;
	cout << var_u << endl;

	/* equivalent to multiplication by 2 –> var_u == 2 */
	var_u = wo_sign << 1;
	cout << var_u << endl;
}

// * Switch
/*
    alternative to cascaded conditionals
    
    swtich - declares the condition to be evaluated
    case - declares a literal value to be compared to the condition
        • case label - case + literal    


    ! template
    switch (variable) {
        case value1:
            ! code to run if variable == value1
            break;
        case value2:
            ! code to run if variable == value2
            break;
        default:
            ! code to run if variable != value1 and variable != value2
    }
*/

// * Vectors
/*
    ! #include<vector>
    
    vector - a sequence of elements of the same type
        e.g, 
            int var1, var2, var3, var4, var5;
            int var[5];
            vector<int> var(5);

    ! template
        vector<type> name(size);
    * number starts at 0

    accessing vector elements (indexing)
        name[index]
    
    swapping vector elements
        swap(name[index1], name[index2]);
    
    initialization
        vector<type> name = {element1, element2, element3, ...};
        int var[] = {1, 2, 3, 4, 5};

    !! 2.7.1.2 Vectors of vectors: multdimensional arrays

*/