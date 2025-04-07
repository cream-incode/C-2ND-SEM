#include <iostream>
using namespace std;

int main()
{
	int num;

	do
	{
		cout << "Enter a positive number: ";
		cin >> num;
		if (num < 0 ){
			cout << "Error not a positive number " << endl;
		}

	} while (num < 0);
	cout << "Nice one tama yan positive integer yan";

	return 0;
}