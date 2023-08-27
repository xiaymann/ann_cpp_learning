#include <iostream>

int main(void)
{
	using namespace std;

	int a;
	int b;

	do
	{
		cout << "Please enter an integer: ";
		cin >> a;
		b += a;
	}
	while(a != 0);
	cout << "sum = " << b << endl;

	return 0;
}
