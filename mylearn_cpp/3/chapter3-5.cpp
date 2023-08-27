#include <iostream>

using namespace std;

int main(void)
{
	cout << "Enter the world's population: ";
	long long pp, pp_us;
	cin >> pp;
	cout << "Enter the population of US: ";
	cin >> pp_us;

	double rate = double(pp_us) / double(pp) * 100;
	cout << "The population of the US is " << rate << "% of the world population." << endl;

	return 0;
}
