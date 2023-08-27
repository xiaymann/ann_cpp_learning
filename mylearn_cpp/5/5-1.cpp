#include <iostream>

int main(void)
{
	using namespace std;

	int a, b;

	cout << "Please enter an integer: ";
	cin >> a;
	cout << "Please enter another integer: ";
	cin >> b;

	int he;
	for(int i = a; i <= b ; i++)
	{
		he += i;
	}

	cout << "integer's counts = " << he << endl;

	return 0;
}
