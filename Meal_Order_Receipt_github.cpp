#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	
	int mealsOrder = 0; 
	double tipPercent = 0; 
	double milesAway = 0;
	double deliverFee = 0;
	double subTotal = 0;
	double tip = 0;
	double total = 0;
	
	// Prompt the user to enter how many meals they want to purchase,
		// tip percentage, and the miles away they are.
	cout << "Welcome, thank you for choosing DubGrub!" << endl; 
	cout << "Enter how many meals will you be purchasing: ";
	cin >> mealsOrder;
	cout << "Enter tip %: ";
	cin >> tipPercent;
	cout << "Enter how many miles away you are: ";
	cin >> milesAway; 
	cout << endl; 
	
	// Display the delivery fee, subtotal, tip amount, and total cost.
	cout << fixed << setprecision(2); 
	deliverFee = milesAway * 1.25;
	cout << "Delivery fee is: " << "$" << deliverFee << endl;
	subTotal = (mealsOrder * 7.50) + deliverFee;
	cout << "Subtotal: " << "$" << subTotal << endl;
	tip = subTotal * (tipPercent / 100);
	cout << "Tip: " << "$" << tip << endl;
	total = subTotal + tip;
	cout << "Total: " << "$" << total;
	
	return 0;
}