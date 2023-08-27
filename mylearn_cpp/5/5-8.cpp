#include <iostream>
#include <string>
#include <cstring>

const int SIZE = 20;
const char FINISHED[] = "done";

int main(void)
{
	using namespace std;

	char word[SIZE];
	cout << "Enter words (to stop, type the word done): " << endl;

	int i = 0;

	while(strcmp(word, "done") != 0)
	{
		i++;
		cin >> word;
		cin.get();
	}

	cout << "You entered a total of " << i-1 << " words." << endl;

	return 0;
}
