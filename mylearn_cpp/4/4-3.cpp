#include <iostream>
#include <cstring>

int main(void)
{
	using namespace std;

	const int Size = 20;
	char first_name[Size], last_name[Size];

	cout << "Enter your first name: ";
	cin.getline(first_name, Size);
	cout << "Enter your last name: ";
	cin.getline(last_name, Size);

	char name[20];
	strcpy(name, last_name);
	strcat(name, ", ");
	strcat(name, first_name);
	cout << "Here's the informaton in a single string: " << name << endl;

	return 0;
}
