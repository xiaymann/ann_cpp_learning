#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const string FINISHED = "done";

int main(void)
{
	cout << "Enter words (to stop, type the word done): " << endl;

	string words;
	int i = 0;

	while(words != FINISHED)
	{
		i++;
		cin >> words;
		cin.get();
	}

	cout << "You entered a total of " << i-1 << " words." << endl;

	return 0;
}
