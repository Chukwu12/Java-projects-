#include <iostream>


using namespace std;


const int BITS_PER_BYTES = 8;
const int BITS_PER_KILOBITS = 1000;

int main()
{

	int bytes, bits;
	int totalbits;
	int kilobits;


	cout << "Enter two integers, one for bytes and "
		<< "one for bits: ";
	cin >> bytes >> bits;
	cout << endl;

	cout << "The numbers you entered are " << bytes
		<< " for bytes and " << bits
		<< " for bits. " << endl;

	totalbits = BITS_PER_BYTES * bytes + bits;

	cout << "The total number of bits = "
		<< totalbits << endl;

	kilobits = totalbits / BITS_PER_KILOBITS;

	cout << "The number of kilobits = "
		<< kilobits << endl;
	system("pause");
	return 0;
}