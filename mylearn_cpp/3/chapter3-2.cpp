#include <iostream>

int main(void)
{
	using namespace std;

	int y_foot, y_inch, y_weight;
	cout << "Your height is:\n " << "Foot: ";
	cin >> y_foot;
	cout << " Inch: ";
	cin >> y_inch;
	cout << "Your weight is (in pounds): ";
	cin >> y_weight;

	int height;
	height = 12 * y_foot + y_inch;
	double height_m;
	double weight_kg;
	const double M_to_inch = 0.0254;
	const double Pound_to_kg = 2.2;
	height_m = height * M_to_inch;
	weight_kg = Pound_to_kg / y_weight;
	double bmi;
	bmi = weight_kg / (height_m * height_m);
	cout << "BMI: " << bmi << endl;

	return 0;
}
