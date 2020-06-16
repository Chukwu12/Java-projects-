#include <iostream>
#include <string>
using namespace std;

int main() {

	char line;
	cout << "Decrypt this code: ";
	cin.ignore();

	cin >> line;

	cout << line;

	cin.get(line);
	cout << line;

	cin.ignore();
	cin.ignore();
	cin.ignore();

	cin.get(line);
	cout << line;
	cin.get(line);
	cout << line;

	cin.get(line);
	cout << line;

	line = cin.peek();
	cout << line;


	system("pause");

	return 0;


}