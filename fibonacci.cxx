#include <iostream>
using namespace std;

int main() {
    int n, t1 = 1, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Sequence: "<< endl;

    
    if (n >= 1){
        cout << t1 << endl;
    }
    if (n >= 2) {
        cout << t2 << endl;
    }
    
    for (int i = 3; i <= n; i++ ){
        nextTerm = t1 + t2;
        cout << nextTerm << endl;
        t1 = t2;
        t2 = nextTerm;
    }
    
    
    return 0;
}