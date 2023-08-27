#include <iostream>
#include <fstream>
#include <cstdlib>  //exit(EXIT_FAILURE);

using namespace std;

const int SIZE = 60;

int main(void)
{
	char filename[SIZE];
	double value;
	double sum = 0.0;
	int count = 0;

	cout << "Enter name of data file:";
	cin.getline(filename, SIZE);

	ifstream inFile;
	inFile.open(filename);
	if(!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating." << endl;
		exit(EXIT_FAILURE);
	}
	cout << "Suceess open the txt file." << endl;

	inFile >> value;
	while(inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}

	if(inFile.eof())
		cout << "End of file reached." << endl;
	else if(inFile.fail())
		cout << "Input terminated by data mismatched." << endl;
	else
		cout << "Input terminated by no reason." << endl;

	if(count == 0)
		cout << "No data processed." << endl;
	else
	{
		cout << "Item read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}

	inFile.close();
	return 0;
}
