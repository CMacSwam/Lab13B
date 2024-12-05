#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

bool isLeapYear(int year);
int daysInMonth(int month, int year);

int main() {
	int month = 0;
	int year = 1582;
	while (true) {
		cout << "Enter a month and a year or Q to quit: ";
		cin >> month;
		cin >> year;
		if (!cin.fail()) {
			int days = daysInMonth(month, year);
			switch (month) {
			case 1: cout << "January " << year << " has " << days << " days.\n";	break;
			case 2: cout << "Feburary " << year << " has " << days << " days.\n"; 	break;
			case 3: cout << "March " << year << " has " << days << " days.\n";	break;
			case 4: cout << "April " << year << " " << days << " days.\n";	break;
			case 5: cout << "May " << year << " has " << days << " days.\n";	break;
			case 6: cout << "June " << year << " has " << days << " days.\n";	break;
			case 7: cout << "July " << year << " has " << days << " days.\n";	break;
			case 8: cout << "August " << year << " has " << days << " days.\n";	break;
			case 9:	cout << "September " << year << " has " << days << " days.\n";	break;
			case 10: cout << "October " << year << " has " << days << " days.\n";	break;
			case 11: cout << "November " << year << " has " << days << " days.\n";	break;
			case 12:cout << "December " << year << " has " << days << " days.\n";	break;
			}
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

/** daysInMonth –	determines the number of days in a specified month
* @param month		the month; expected to be in the range [1..12]
* @param year		the year; expected to be >= 1582
* @return			either 28, 29, 30, or 31, based on month and (leap) year
*/
int daysInMonth(int month, int year) {
	switch (month) {
	case 1: return 31;
	case 2: if (isLeapYear(year)){ return 29;}
		  else if(!isLeapYear(year)){ return 28; }
	case 3: return 31;
	case 4: return 30;
	case 5: return 31;
	case 6: return 30;
	case 7: return 31;
	case 8: return 31;
	case 9:	return 30;
	case 10: return 31;
	case 11: return 30;
	case 12: return 31;
	}
}

