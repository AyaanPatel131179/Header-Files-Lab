// Ayaan Patel, 4/29/26, Math Util Library.

#include <iostream> //include the iostream library for input/output operations

#include "mathUtils.h" //include the header file for math utilities


using namespace std;

int main() {
//declare variables for testing the math functions
    int x = 10;

    int y = 5;
    
    cout << "add:" << add(x,y) << endl;

    cout << "subtract:" << subtract(x,y) << endl;

    cout << "multiply:" << multiply(x,y) << endl;

    cout << "divide:" << divide(x,y) << endl;

    return 0;
}
