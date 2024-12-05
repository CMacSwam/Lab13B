#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

bool isLeapYear(int year);
int daysInMonth(int month, int year);
int dayOfWeek(int month, int day, int year);


int main() {
	int month = 0;
	int year = 1582;
	int day = 0;

	while (true) {
		cout << "Enter a date  or Q to quit: ";
		cin >> month;
		cin >> day;
		cin >> year;
		if (!cin.fail()) {
			switch (dayOfWeek(month, day, year)) {
			case 1: cout << "Monday, "; break;
			case 2:cout << "Tuesday, "; break;
			case 3:cout << "Wednesday, "; break;
			case 4:cout << "Thursday, "; break;
			case 5:cout << "Friday, "; break;
			case 6:cout << "Saturday, "; break;
			case 7:cout << "Sunday, "; break;
			}
			switch (month) {
			case 1: cout << "January " << day << ", " << year << endl;	break;
			case 2: cout << "Feburary " << day << ", " << year << endl;	break;
			case 3: cout << "March " << day << ", " << year << endl;	break;
			case 4: cout << "April " << day << ", " << year << endl;	break;
			case 5: cout << "May " << day << ", " << year << endl;	break;
			case 6: cout << "June " << day << ", " << year << endl;	break;
			case 7: cout << "July " << day << ", " << year << endl;	break;
			case 8: cout << "August " << day << ", " << year << endl;	break;
			case 9:	cout << "September " << day << ", " << year << endl;	break;
			case 10: cout << "October " << day << ", " << year << endl;	break;
			case 11: cout << "November " << day << ", " << year << endl;	break;
			case 12:cout << "December " << day << ", " << year << endl;	break;
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

/** dayOfWeek - Computes the weekday of a given date.
* @param year	the year
* @param month	the month (1 = January ... 12 = December)
* @param day	the day of the month
* @return		the weekday (0 = Saturday ... 6 = Friday)
*/
int dayOfWeek(int month, int day, int year) {
	if (month == 1 || month == 2) {
		month += 12;
		year--;
	}
	int days = (day + (((month + 1) * 26) / 10) + year + (year / 4) + (6 * (year / 100)) + (year / 400)) % 7;
	days -= .5;
	return days;
}

