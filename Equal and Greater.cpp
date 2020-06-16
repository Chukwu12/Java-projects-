#include<iostream>
#include <string>
#include <iomanip>


using namespace std;

int main() {
	int num1, num2, num3;

	cout << "Please Enter Values For Num1, Num2, and Num3 ";
	cin >> num1 >> num2 >> num3;
	cout << endl;

	if (num1 > num2 && num1 >= num3) {
		cout << "Num1 is equal to Num3  ";
		cout << endl;
	}
	else if (num2 > num1 && num2  >= num3) {
		cout << "Num2 is equal Num3  ";
		cout << endl;
	}
	else {
		(num3 > num2 && num3 >= num1);
		cout << "Num3 is equal to Num1 ";
		cout << endl;
	}

	system("pause");

	return 0;
}