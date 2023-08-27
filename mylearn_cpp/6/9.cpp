#include <iostream>

using namespace std;

int main(void)
{
	int a, b;
	int c;

	cout << "Enter two integers:";
	cin >> a >> b;

	cout << "The larger of " << a << " and " << b;

	c = a > b ? a : b;

	cout << " is " << c << "." << endl;

	return 0;
}
