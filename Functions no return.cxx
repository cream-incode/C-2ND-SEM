// dont need return value in function since its void

#include <iostream>
using namespace std;

void addition ()
{
	int a = 1, b = 2, sum;
	sum = a + b;
	cout << sum;
}
int main ()
{
	addition();
	
	return 0;
}