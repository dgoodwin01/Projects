// -------------------------------------------
// Dylan Goodwin
// We are calculating user input 
// 	then displaying an output
// 		like a receipt for a trip.
// -------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double totalTripMiles = 0;
	double milesPerGallon = 0;
	double pricePerGallon = 0;
	int numNightsHotel = 0;
	double hotelRate = 0;
	
	double totalCostFuel = 0;
	double totalCostHotel = 0;
	double totalCostTrip = 0;
	
	// Asking the user for the data
	cout << "Total distance of the road trip: ";
	cin >> totalTripMiles;
	cout << "Average MPG of your vehicle: ";
	cin >> milesPerGallon;
	cout << "Current price per gallon is: ";
	cin >> pricePerGallon;
	cout << "How many nights at the hotel: ";
	cin >> numNightsHotel;
	cout << "Nightly hotel rate is: ";
	cin >> hotelRate;
	
	// Using the user data for calculations
	totalCostFuel = (totalTripMiles / milesPerGallon) * pricePerGallon;
	totalCostHotel = numNightsHotel * hotelRate;
	totalCostTrip = totalCostFuel + totalCostHotel;
	cout << endl;
	
	// Displaying the calculations like a receipt
	cout << "Total cost of fuel is " << fixed << setprecision(2) << "$" << totalCostFuel << endl;
	cout << "Total cost of the hotel is " << fixed << setprecision(2) << "$" << totalCostHotel << endl;
	cout << "Total cost of the trip is " << fixed << setprecision(2) << "$" << totalCostTrip;
	
	return 0;
}