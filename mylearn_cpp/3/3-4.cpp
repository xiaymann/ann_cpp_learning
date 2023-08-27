#include <iostream>

int main(void)
{
	using namespace std;

	int cheat = 42;  //Decimal
	int waist = 0x42;  //Hex
	int inseam = 042;  //Octal

	cout << "cheat = " << cheat << " (in dec)." << endl;

	cout << hex;
	cout << "waist = " << waist << " (in hex)." << endl;

	cout << oct;
	cout << "inseam = " << inseam << " (in oct)." << endl;

	return 0;
}
