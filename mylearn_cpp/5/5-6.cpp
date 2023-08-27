#include <iostream>

int main(void)
{
	using namespace std;

	int sales[3][12] =
	{
		{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
		{13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24},
		{25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36}
	};

	const char * years[3] = {"2020", "2021", "2022"};

	for(int i = 0; i < 3; i++)
	{
		cout << years[i] << " Sales:";
		for(int j = 0; j < 12; j++)
		{
			cout << sales[i][j] << "\t" ;
		}
		cout << endl;
	}

	return 0;
}
