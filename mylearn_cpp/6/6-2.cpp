#include <iostream>
#include <cctype>
#include <array>

using namespace std;

int main(void)
{
	array<double, 10> donation;
	double input;
	int count = 0;
	double sum = 0.0;
	double average;

	cout << "Please enter the double numerial: ";

	while(cin >> input)// && count < 10)
	{
		donation[count++] = input;
//		count++;
		if(count == 10)
			break;
		cout << "Please enter the double numerial: ";
	}

	for(int i = 0; i < count; i++)
		sum += donation[i];

	average = sum / count;

	int bigger = 0;

	for(int i = 0; i < count; i++)
	{
		if(donation[i] > average)
			bigger++;
	}

	cout << "Average is: " << average << endl;
	cout << bigger << " numbers are bigger than average." << endl;
	return 0;
}
