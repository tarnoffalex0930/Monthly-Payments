// Monthly Payments Calculator

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

//Variables
	double loanAmount, annualInterestRate, monthlyInterestRate, monthlyPayment, totalPayment, interestPaid;
	int numberOfPayments;

	//Input
	cout << "Enter loan amount: ";
	cin >> loanAmount;
	cout << "Enter annual interest rate (in %): ";
	cin >> annualInterestRate;
	cout << "Enter number of payments (in months): ";
	cin >> numberOfPayments;

	//Calculations
	monthlyInterestRate = annualInterestRate / 1200; // Convert annual rate to monthly and percentage to decimal
	monthlyPayment = loanAmount * monthlyInterestRate / (1 - pow(1 + monthlyInterestRate, -numberOfPayments));
	totalPayment = monthlyPayment * numberOfPayments;
	interestPaid = totalPayment - loanAmount;

	//Output
	cout << fixed << setprecision(2);
	cout << "Monthly Payment: $" << monthlyPayment << endl;
	cout << "Total Payment: $" << totalPayment << endl;
	cout << "Total Interest Paid: $" << interestPaid << endl;

	return 0;
}
