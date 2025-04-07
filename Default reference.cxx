#include <iostream>
using namespace std;

// argument
int multiply(int , int );

int main()
{
    // must have both value or will error
    cout << multiply(10, 5) << endl;
    cout << multiply(20,5) << endl;
    return 0;
}

//statement
int multiply(int a, int b )
{
    int product;
    product = a * b;
    return product;
}