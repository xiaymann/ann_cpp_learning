#include <iostream>

using namespace std;

int main(void)
{
	double number, sum = 0.0;

	cout << "Calculate five numbers sum and averaage." << endl;
	cout << "Please enter five values:" << endl;

	for(int i = 1; i <= 5; i++)
	{
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}

	cout << "The sum is " << sum << endl;
	cout << "Average = " << sum / 5 << endl;

	return 0;
}
