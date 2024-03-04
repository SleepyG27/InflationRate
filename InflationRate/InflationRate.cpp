/*Write a program that outputs the inflation rates for two successive years and whether the inflation
trend is increasing or decreasing. Ask the user to input the current price of an item and its price one year
and two years ago. To calculate the inflation rate for a year, subtract the price of the item for that year
from the price of the item one year ago and then divide the result by the price a year ago */

#include <iostream>
#include <iomanip>

using namespace std;


double Calculation(double CurrentPrice, double PriceOneYearAgo, double PriceTwoYearsAgo)
{
	return (CurrentPrice - PriceOneYearAgo) / PriceTwoYearsAgo;
}

void UserInput(double& CurrentPrice, double& PriceOneYearAgo, double& PriceTwoYearsAgo) {
	cout << "What is the current price of the item:";
	cin >> CurrentPrice;
	cout << "What is the price of the item one year ago:";
	cin >> PriceOneYearAgo;
	cout << "What is the price of the item two years ago:";
	cin >> PriceTwoYearsAgo;

}

void Output(double CurrentPrice, double PriceOneYearAgo, double PriceTwoYearsAgo) {
	double InflationRate = Calculation(CurrentPrice, PriceOneYearAgo, PriceTwoYearsAgo);
	if (InflationRate == 0)
		cout << "Inflation is not changing" << endl;
	if (InflationRate < 0)
		cout << "Inflation is decreasing" << endl;
	if (InflationRate > 0)
		cout << "Inflation is increasing" << endl;



	cout << fixed << setprecision(2);
	cout << "The inflation rate is:" << InflationRate << endl;

}

int main() {
	double CurrentPrice;
	double PriceOneYearAgo;
	double PriceTwoYearsAgo;

	UserInput(CurrentPrice, PriceOneYearAgo, PriceTwoYearsAgo);
	Output(CurrentPrice, PriceOneYearAgo, PriceTwoYearsAgo);
	return 0;
}

