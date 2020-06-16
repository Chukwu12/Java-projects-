#include <iostream>
using namespace std;

int main()
{
	const double interest_rate = 0.025;
	double creditCardBalance;
	double payment;
	double balance;
	double total_next_cycle;
	double penalty = 0.0;


	cout << "Enter Credit Card Balance Please $:";
	cin >> creditCardBalance;
	cout << endl;

	cout << "Enter Payment Please $:";
	cin >> payment;
	cout << endl;

	balance = creditCardBalance - payment;

	if (balance > 0)
	{
		penalty = balance * interest_rate;
		cout << "The balance is $:" << balance <<
			endl;

		cout << "The penalty that should be added $:" << penalty <<
			endl;

		total_next_cycle = balance + penalty;
		cout << " The total balance for the next billing cycle $:"
			<< total_next_cycle <<
			endl;
	}

	else {
		total_next_cycle = balance;
		cout << "the total balance for the next billing cycle is $ :"
			<< total_next_cycle << endl;
	}
	system("pause");
	return 0;












}