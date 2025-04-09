#include <iostream>
using namespace std;

void duplicate (int &a , int &b){
a = a +1;
b = b + 2;
}
int main ()
{
	
	int x = 3 , y = 6;
	//x will become a
	// y will become b
	duplicate (x,y);
	
	// so A will become x = x + 1;
	// so B  will becomr y = y + 2
	
	cout<<"x = "<< x <<endl;
	cout<<"y = "<< y <<endl;
	
	return 0;
}