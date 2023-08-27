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
	CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}, {"Hershey bar", 4.2, 550}, {"Musketeers", 2.6, 430}};
	//cout << "Enter your favorite candybar: ";
	//cin.getline(snack.brand, 20);
	//cout << "Enter its weight: ";
	//cin >> snack.weight;
	//cout << "Enter its calorie: ";
	//cin >> snack.calorie;

	cout << "My 1st candybar is " << snack[0].brand << "." << endl;
	cout << "And its weight is " << snack[0].weight << ", calorie is " << snack[0].calorie << "." << endl;

        cout << "My 2st candybar is " << snack[1].brand << "." << endl;
        cout << "And its weight is " << snack[1].weight << ", calorie is " << snack[1].calorie << "." << endl;

        cout << "My 3st candybar is " << snack[2].brand << "." << endl;
        cout << "And its weight is " << snack[2].weight << ", calorie is " << snack[2].calorie << "." << endl;

	return 0;
}
