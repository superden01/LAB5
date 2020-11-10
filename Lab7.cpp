
#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{
	int y, n = 3;
	cout << "Enter y =";
	cin >> y;
	float rez;
	int sum=0 ;
	for (int n = 1; n < 4; n++)
	{
		sum = sum + pow(n, 2);
	}

	rez =sum*pow(y,3);
	cout << "Y=" << rez << endl;

	system("pause");
	return 0;
}

