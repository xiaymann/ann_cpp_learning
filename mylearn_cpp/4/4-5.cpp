#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct CandyBar
{
	char brand[20];
	float weight;
	int calorie;
};

int main(void)
{
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << "My favorite candybar is " << snack.brand << "." << endl;
	cout << "And its weight is " << snack.weight << ", calorie is " << snack.calorie << "." << endl;

	return 0;
}
