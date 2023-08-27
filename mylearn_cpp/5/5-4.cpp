#include <iostream>

int main(void)
{
	using namespace std;

	double daphne = 100, cleo = 100;

	while(cleo <= daphne)
	{
		cleo = cleo * 1.05;
		daphne = daphne + 10;
	}
	cout << "Now: " << endl;
	cout << "Daphne = " << daphne << " ;" << endl;
	cout << "Cleo = " << cleo << " ." << endl;

	return 0;
}
