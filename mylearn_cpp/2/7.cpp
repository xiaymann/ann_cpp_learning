#include <iostream>

int stonetolb(int sts);

int main(void)
{
	using namespace std;

	int sts;
	cout << "Enter the weight in stones: ";
	cin >> sts;
	int pounds;
	pounds = stonetolb(sts);
	cout << sts << "stones = " << pounds << " pounds" << endl;

	return 0;
}

//1 stone = 14 lbs
int stonetolb(int sts)
{
	//int pounds;
	//pounds = 14 * sts;
	return 14 * sts;
}
