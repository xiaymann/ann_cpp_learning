#include <iostream>

int main(void)
{
	using namespace std;
	int n;

	cout << "Enter numbers in the range 1~10 to find my favorite number" << endl;

	do
	{
		cin >> n;
	}while(n != 7);

	cout << "Yes! This is my favorite number." << endl;

	return 0;
}
