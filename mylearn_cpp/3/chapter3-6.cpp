#include <iostream>

using namespace std;

int main(void)
{
	cout << "Please enter kilometersa: ";
	double km, gallon;
	cin >> km;
	cout << "Enter gallon: ";
	cin >> gallon;

	double rate = gallon / km;
	cout << "Oil consumption: " << rate << " gallon/km." << endl;

	double rate_europe = rate * 100;
	cout << "Oil consumption in Europe: " << rate_europe << " gallon/100km" << endl;

	return 0;
}
