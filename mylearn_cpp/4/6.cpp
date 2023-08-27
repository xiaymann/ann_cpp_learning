#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	cout << "What year was your house built? " << endl;
	int year;
	// (cin >> year).get();
	cin >> year;
	cin.get();
	cout << "What is its street address? " << endl;
	char address[80];
	cin.getline(address, 80);

	cout << "Year built: " << year << endl;
	cout << "Adress:" << address << endl;

	return 0;
}
