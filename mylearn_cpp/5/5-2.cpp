#include <iostream>
#include <string>
#include <array>

int main(void)
{
	using namespace std;

	array<long double, 101> jiecheng;
	jiecheng[0] = jiecheng[1] = 1;
	for(int i=2; i <= 100 ;i++)
	{
		jiecheng[i] = jiecheng[i-1] * i;
	}

	cout << "100's jiecheng is: " << jiecheng[100] << endl;

	return 0;
}
