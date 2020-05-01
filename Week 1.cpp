
#include <iostream>

using namespace std;

int main()
{
	cout << " Enter a number and see the results:" <<endl;
	
	int num1;
	cout << "num1:   ";
	int num2;
	cout << "num2:   ";
	int num3;
	cout << "num3:   ";
	
	cin >> num1 >> num2 >> num3;
	
	cout << "total=" << num1 + num2 + num3 << endl;
	
	cout << "average=" << (num1 + num2 + num3) /3 <<endl;

	
	system("pause");
	return 0;
}

