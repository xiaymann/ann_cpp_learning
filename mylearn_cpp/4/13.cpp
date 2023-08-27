#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main(void)
{
	inflatable guests[2] =
	{
		{"Glorious Gloria", 1.88, 29.99},
		{"Bodzilla", 2000, 265.99}
	};

	cout << "The guests " << guests[0].name << " and " << guests[1].name << " have a combined volume of "
	     << guests[0].volume + guests[1].volume << " cubic feet." << endl;

	return 0;
}
