#include <iostream>
using namespace std;

bool isLeapYear(unsigned int year);

int main()
{
	cout << "Hello, Traveler! Curious about leap years, I see. I'm the best at determining leap years." << endl;
	cout << "C'mon. Give me a year and I will tell you if it was a leap year! ";

	unsigned int year;
	cin >> year;

	cout << "Thank you, Traveler. Let me think..." << endl;
	bool isLeap = isLeapYear(year);
	cout << "Ah, Yes! The year " << year;

	if (isLeap) {
		cout << " is a Leap Year!" << endl;
	}
	else {
		cout << " is NOT a Leap Year!" << endl;
	}
	return 0;
}

bool isLeapYear(unsigned int year) {

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 != 0) {
				return false;
			}
		}
		return true;
	}
	return false;

}
