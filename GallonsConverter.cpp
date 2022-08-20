/*
Ryan Vales
CSCI 1050
Assignment 1
Dr. Li
*/

#include <iostream>

using namespace std;

class Solution {
private:
	double gallons;
	double liters;
	double quarts;
	double ounces;
public:
	void getInput();
	void convertToLiters();
	void convertToQuarts();
	void convertToOunces();
};

void Solution::getInput() {
	cout << "Gallons Converter\n\n";

	cout << "Enter gallons: ";
	cin >> gallons;
}

void Solution::convertToLiters() {
	liters = gallons * 3.7854;

	cout << "Liters: " << liters << endl;
}

void Solution::convertToQuarts() {
	quarts = gallons * 4;

	cout << "Quarts: " << quarts << endl;
}

void Solution::convertToOunces() {
	ounces = gallons * 128;

	cout << "Ounces: " << ounces << "\n\nBye!";
}

int main() {
	Solution solution;

	solution.getInput();
	solution.convertToLiters();
	solution.convertToQuarts();
	solution.convertToOunces();

	return 0;
}