#include "mathUtils.h"

// Function definitions

//adds two integers and returns the result
int add(int a,int b){

    return a + b;

}
//subtracts the second integer from the first and returns the result
int subtract(int a,int b){

    return a - b;

}
//multiplies two integers and returns the result
int multiply(int a,int b){

    return a * b;
}
//divides the first double by the second and returns the result. If the second double is zero, it returns zero to avoid division by zero errors.
double divide(double a,double b){

    if (b == 0){

        return 0;

    }
    return a/b;
}
