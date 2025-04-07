#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "what number: ";
	cin >> a;
	cout << "hanggang saan: ";
	cin >> b;

	for (int k = 0; k <= b; k++)
	{
		cout << a << " * " << k <<  " = " << a * k << endl;
	}

	return 0;
}