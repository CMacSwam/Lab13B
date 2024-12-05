#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

bool isLeapYear(int year);

int main() {
	int input = 0;
	while (true) {
		cout << "Enter a year or Q to quit: ";
		cin >> input;
		if (!cin.fail()) {
			if (isLeapYear(input)) {
				cout << input << " is a leap year\n";
			}
			else cout << input << " is not a leap year\n";
		}
		else break;
	}
}

/**	isLeapYear –	determines whether a given year is a leap year under the Gregorian calendar.
* 
* @param year		the year; expected to be >= 1582
* @return true		if year is a leap year; false otherwise
*/
bool isLeapYear(int year) {
	if (year % 100 == 0) {
		if (year % 400 == 0) return true;
		else return false;
	}
	else if (year % 4 == 0) return true;
	else return false;
}
