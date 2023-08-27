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
	Pizza *pizza = new Pizza;

	cout << "Enter pizza's name: ";
	cin.getline(pizza->name, 20);
	cout << "Enter its diameter: ";
	cin >> pizza->diameter;
	cout << "Enter its weight: ";
	cin >> pizza->weight;

	cout << "Name: " << pizza->name << endl;
	cout << "Diameter: " << pizza->diameter << endl;
	cout << "Weight: " << pizza->weight << endl;

	delete pizza;
	return 0;
}
