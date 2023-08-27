#include <iostream>
#include <climits>
using namespace std;

bool is_int(double x);

int main(void)
{
	double num;

	cout << "Yo, dude! Enter an integer value:";
	cin >> num;

	while(!is_int(num))
	{
		cout << "Out of range -- Please try again:";
		cin >> num;
	}
	int val = int(num);
	cout << "You've entered the integer " << val << "\nBye\n";

	return 0;
}

bool is_int(double x)
{
	if(x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}
