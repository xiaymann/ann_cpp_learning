#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct inflatable
{
	string name;
	float volume;
	double price;
};

int main(void)
{
	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		29.99
	};

	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};

	cout << "Expand your guest list with " << guest.name << " and " << pal.name << "!\n";
	cout << "You can have both for $" << guest.price + pal.price << endl;

	return 0;
}
