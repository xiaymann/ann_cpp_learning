#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct Pizza
{
	char name[20];
	float diameter;
	float weight;
};

int main(void)
{
	Pizza costum;
	cout << "Enter pizza's name: ";
	cin.getline(costum.name, 20);
	cout << "Enter its diameter: ";
	cin >> costum.diameter;
	cout << "Enter its weight: ";
	cin >> costum.weight;

	cout << "Name: " << costum.name << endl;
	cout << "Diameter: " << costum.diameter << endl;
	cout << "Weight: " << costum.weight << endl;

	return 0;
}
