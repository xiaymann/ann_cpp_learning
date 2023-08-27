#include <iostream>
#include <cmath>
using namespace std;
double tem(double);

int main(void)
{
	double celsius;
	double fah;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	fah = tem(celsius);
	cout << celsius << " degrees Celsius is " << fah << " degrees Fahrenheit." << endl;

	return 0;
}

double tem(double cel)
{
	return 1.8 * cel + 32.0;
}
