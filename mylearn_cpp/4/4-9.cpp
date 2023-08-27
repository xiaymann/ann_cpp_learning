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
	CandyBar *pt = new CandyBar[3];
//	CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}, {"Hershey bar", 4.2, 550}, {"Musketeers", 2.6, 430}};
	strcpy(pt[0].brand, "Mocha Munch");
	pt[0].weight = 2.3;
	pt[0].calorie = 350;
	strcpy(pt[1].brand, "Hershey bar");
        pt[1].weight = 4.2;
        pt[1].calorie = 550;
	strcpy(pt[2].brand, "Musketeers");
        pt[2].weight = 4.3;
        pt[2].calorie = 400;

	//cout << "Enter your favorite candybar: ";
	//cin.getline(snack.brand, 20);
	//cout << "Enter its weight: ";
	//cin >> snack.weight;
	//cout << "Enter its calorie: ";
	//cin >> snack.calorie;

	cout << "My 1st candybar is " << pt->brand << "." << endl;
	cout << "And its weight is " << pt->weight << ", calorie is " << pt->calorie << "." << endl;

        cout << "My 2st candybar is " << (pt+1)->brand << "." << endl;
        cout << "And its weight is " << (pt+1)->weight << ", calorie is " << (pt+1)->calorie << "." << endl;

        cout << "My 3st candybar is " << (pt+2)->brand << "." << endl;
        cout << "And its weight is " << (pt+2)->weight << ", calorie is " << (pt+2)->calorie << "." << endl;

	delete [] pt;
	return 0;
}
