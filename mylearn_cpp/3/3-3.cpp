#include <iostream>

int main(void)
{
	using namespace std;

	int cheat = 42;  //Decimal
	int waist = 0x42;  //Hex
	int inseam = 042;  //Octal

	cout << "cheat = " << cheat << " (42 in dec)." << endl;
	cout << "waist = " << waist << " (0x42 in hex)." << endl;
	cout << "inseam = " << inseam << " (042 in oct)." << endl;

	return 0;
}
