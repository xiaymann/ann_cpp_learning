#include <iostream>

using namespace std;
void mice(void);
void see(void);

int main(void)
{
	mice();
	mice();
	see();
	see();
	return 0;
}

void mice(void)
{
	cout << "Three blind mice." << endl;
}
void see(void)
{
	cout << "See how they run." <<endl;
}
