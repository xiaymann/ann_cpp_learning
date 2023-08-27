#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct cars
{
	string maker;
	int year;
};

int main(void)
{
	int number;
	cout << "How many cars do you wish to catalog? ";
	cin >> number;
	cin.get();
	cars * p = new cars[number];


	for(int i = 0; i < number; i++)
	{
		cout << "Car #" << i+1 << ":" << endl;
		cout << "Please enter the maker: ";
		getline(cin, p[i].maker);
		cout << "Please enter the year made: ";
		cin >> p[i].year;
		cin.get();
	}

	cout << "Here is your collection:" << endl;
	for(int i = 0; i < number; i++)
	{
		cout << p[i].maker << " " << p[i].year << endl;
	}
	delete [] p;
	return 0;
}
