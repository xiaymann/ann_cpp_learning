#include <iostream>

using namespace std;
void showmenu(void);

int main(void)
{
	showmenu();

	char choice;
//	cin.get(choice);

	while(cin.get(choice))
	{
		switch(choice)
		{
			case 'c': cout << "A maple is a carnivore." << endl; break;
			case 'p': cout << "A maple is a pianist." << endl; break;
			case 't': cout << "A maple is a tree." << endl; break;
			case 'g': cout << "A maple is a game." << endl; break;
			default: cout << "Please enter a c, p, t, or g:"; // cin.get();
			// cin >> choice;
		}
		cin.get();
		//cin.get(choice);
	}

	return 0;
}

void showmenu(void)
{
	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore    p) pianist\n"
		"t) tree         g) game\n";
}
