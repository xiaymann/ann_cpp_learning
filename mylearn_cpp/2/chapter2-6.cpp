#include <iostream>
#include <cmath>

using namespace std;
double reunite(double);

int main(void)
{
	cout << "Enter the number of light years: ";
	double ly;
	cin >> ly;
	double ast;
	ast = reunite(ly);
	cout << ly << " light years = " << ast << " astronomical units." << endl;
	return 0;
}

double reunite(double ly)
{
	double ast = 63240 * ly;
	return ast;
}
