#include <iostream>
#include <string>

using namespace std;

const int ArSize = 80;

int main(void)
{
	cout << "Enter a line of text:" << endl;

	char line[ArSize];
	int spaces = 0;

	cin.get(line, ArSize);
	cout << "Complete line:\n" << line << endl;
	cout << "Line through first period:\n";

	for(int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];
		if(line[i] == '.')
			break;
		if(line[i] == ' ')
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces.\n";
	cout << "Done.\n";

	return 0;
}
