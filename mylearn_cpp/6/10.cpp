#include <iostream>

using namespace std;

void showmenu(void);
void report(void);
void comfort(void);

int main(void)
{
	showmenu();

	int choice;
	cin >> choice;
	while(choice != 5)
	{
		switch(choice)
		{
			case 1: cout << "Warning!!!" << endl;
				break;
			case 2: report();
				break;
			case 3: cout << "The boss was in all day." << endl;
				break;
			case 4: comfort();
				break;
			default: cout << "That is not a choice." << endl;
		}
		showmenu();
		cin >> choice;
	}
	cout << "Bye!\n";

	return 0;
}

void showmenu(void)
{
	cout << "Please enter 1, 2, 3, 4, 5 as your choice: " << endl;
	cout << "1) alarm      2) report" << endl;
	cout << "3) alibi      4) comfort" << endl;
	cout << "5) quit" << endl;
}

void report(void)
{
	cout << "It's been an excellent week for business.\n"
		"Sales are up 120%. Expenses are down 35%.\n";
}

void comfort(void)
{
	cout << "You are the best CEO." << endl;
}
