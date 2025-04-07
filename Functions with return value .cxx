// Need return since function is 
// datatype functionName (parameter){Statement}

#include <iostream>
using namespace std;


int addition (int a , int b)
{
	int sum;
	sum = a + b;
	
	return sum;
}
int main ()
{
	int add = addition(1,2);
	cout << add;
	
	return 0;
}