#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	string first_name, last_name, grade;
	int age;

	cout << "What is your first name? ";
	getline(cin, first_name);
	cout << "What is your last name? ";
	getline(cin, last_name);
	cout << "What letter grade do you deserve? ";
	getline(cin, grade);
	cout << "What is your age? ";
	cin >> age;

	cout << "Name " << first_name << ", " << last_name << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;

	return 0;
}
