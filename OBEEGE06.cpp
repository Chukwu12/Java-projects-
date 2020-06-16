#include <iostream>
using namespace std;

const double local_tax_rate = 0.08875;
const double credit_perc = 0.05;

int main()
{
	int GROSS, NON__TAXABLE;
	int TAXABLE;
	double pre_tax, vendor_credit, pen_and_int, tax_due;

	cout << "ENTER TWO INTEGERS ONE FOR GROSS" << "ONE FOR TAXABLE: ";
	cin >> GROSS >> NON__TAXABLE;
	cout << endl;
	cout << "Enter the penalties and interest due at this time: ";
	cin >> pen_and_int;
	cout << endl;

	cout << "The number you entered are " << GROSS
		<< "For the gross sales and " << NON__TAXABLE
		<< "SALE EXEMPT FROM TAXES. "
		<< "PENALTIES AND INTEREST" << pen_and_int
		<< endl;
	TAXABLE = GROSS - NON__TAXABLE;
	cout << "The taxable total of the sales for this quarter: " <<
		TAXABLE << endl;
	pre_tax = TAXABLE * local_tax_rate;
	cout << "The PRE_TAX for this quarter is: " << pre_tax << endl;

	vendor_credit = pre_tax * credit_perc;
	cout << "The amount to be credited to vendor for this quarter is: " << vendor_credit << endl;

	tax_due = pre_tax - vendor_credit;
	cout << "THE FINAL CALCULATION OF THE SALES TAX DUE for this quarter: " << tax_due << endl;

	system("pause");

	return 0;



}
