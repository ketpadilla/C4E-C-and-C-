#include <iostream>
#include <vector>
#include <string>
using namespace std;

class X {
    public:
        X(void) { cout << 1; }
        ~X(void) { cout << 2; }
};

X *exec() {
    X *x = new X();
    throw string("0");
    return x;
}

int main() {
    // M1 Test: Focused on value of literals (E, hex, oct, dec)
    // M2 Test: Focused on output of programs (conditionals, loops, & strucutres)
    // M3 Test: Focused on output of programs (functions, arrays, & pointers)
    // M4 Test: Focused on output of programs (namespaces, strings, arrays, & pointers)
    // Part 1 Summary Test: Covers M1-M4
    // M5 Test: Focused on output of programs (classes)

    X *x;
    try {
        delete exec();
    } catch(string &s) {
        cout << s;}

    return 0;
}
