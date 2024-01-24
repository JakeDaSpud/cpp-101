// sam101

#include <iostream> // Input-Output Stream library

// function declaration (or function prototype)
int add(int, int);  // a function must be declared before it is called.
int multiply(int, int);
float divide(int, int);


int main() {
    std::cout << "sam101 - calling add function from main()" << std::endl;
    int sum = add(3,7);
    std::cout <<  "Sum of values = " << sum << std::endl;

    std::cout << "sam101 - calling multiply function from main()" << std::endl;
    int product = multiply(10,3);
    std::cout <<  "Product of values = " << product << std::endl;

    std::cout << "sam101 - calling divide function from main()" << std::endl;
    float divProduct = divide(1,2);
    std::cout <<  "Division of values = " << divProduct << std::endl;

    return 0;
}

// function definition
int add( int x, int y) {    // two int parameters, returns int
    return x + y;
}

//TODO
// 1. Define a function multiply(int,int) that takes two integer
// arguments and returns an int value.  Test your function
// and output the value it returns.

int multiply( int x, int y) {
    return x * y;
}

//TODO
// 2. Define a function divide(int,int) that takes two integer arguments
// and returns the result of dividing the first by the second.
// Consider what the return type should be.
// Output your result. Try calling divide(3,2)

float divide( int x, int y) {
    return ((float) x / y);
}
