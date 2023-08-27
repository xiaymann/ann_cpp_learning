#include <iostream>
#include <string>
#include <cstring>

int main(void)
{
	using namespace std;

	char fn[20];
	char ln[20];

	cout << "What is your first name? ";
	cin.getline(fn, 20);
	cout << "What is your last name? ";
	cin.getline(ln, 20);
	cout << "What letter grade do you deserve? ";
	char grade = cin.get();
	cout << "What is your age? ";
	int age;
	cin >> age;

	cout << "Name: " << ln << ", " << fn << endl;
	cout << "Grade: " << char(grade+1) << endl;
	cout << "Age: " << age << endl;

	return 0;
}
