#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	const int ArSize = 20;

	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: " << endl;
	cin >> name;
	cout << "Enter your fevorite dessert: " << endl;
	cin >> dessert;

	cout << "I have some delicious " << dessert << " for " << name << "." << endl;


	return 0;
}
