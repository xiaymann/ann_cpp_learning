#include <iostream>
#include <string>
#include <cstring>
#include <array>

using namespace std;

int main(void)
{
	array<float, 3> record_list;
	float average;

	cout << "Enter 3 records of 40m: " << endl;
	cout << "First record: ";
	cin >> record_list[0];
	cout << "Second record: ";
        cin >> record_list[1];
	cout << "Third record: ";
        cin >> record_list[2];

	cout << "1st: " << record_list[0] << "; " << "2st: " << record_list[1] << "; " << "3st: " << record_list[2] << ".";
	average = (record_list[0] + record_list[1] + record_list[2]) / 3;
	cout << "Average: " << average << endl;

	return 0;
}
