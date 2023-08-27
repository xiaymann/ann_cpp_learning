#include <iostream>
#include <cctype>

using namespace std;

// const int SIZE = 50;

int main(void)
{
	cout << "Please enter";
	cout << "(@ to stop) :" << endl;

	char ch;
	cin.get(ch);
	while(ch != '@')
	{
		if(isdigit(ch) != 0)
		{
			//  cout << "Please don't enter number."<< endl;
			cin.get(ch);
			continue;
		}
		else if(islower(ch) != 0)
			ch = toupper(ch);
		else
			ch = tolower(ch);
		cout << ch;
		cin.get(ch);
	}
	cout << "Done!\n";

	return 0;
}
