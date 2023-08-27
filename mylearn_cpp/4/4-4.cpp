#include <iostream>
#include <string>
#include <cstring>

int main(void)
{
	using namespace std;

	string first_name, last_name, full_name;
	cout << "Enter your first name: ";
	getline(cin, first_name);
	cout << "Enter youe last name: ";
	getline(cin, last_name);

	full_name = last_name + "." + first_name; 
	cout << "Here's the information in a single string: " << full_name << endl;
	return 0;
}
