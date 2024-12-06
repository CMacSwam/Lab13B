#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

bool isLeapYear(int year);
int daysInMonth(int month, int year);
int dayOfWeek(int month, int day, int year);


int main() {
	string month;
	int year = 1582;
	int day = 0;

	while (true) {
		cout << "Enter a month and year or Q to quit: ";
		cin >> month;
		cin >> year;
		int inputMonth = 0;
		cout << endl;

		string filename = month.substr(0, 3) + to_string(year) + ".txt";
		ofstream outfile (filename);

		if (!cin.fail()) {
			
			if (month == "January") inputMonth = 1;
			else if (month == "Feburary") inputMonth = 2;
			else if (month == "March") inputMonth = 3;
			else if (month == "April") inputMonth = 4;
			else if (month == "May") inputMonth = 5;
			else if (month == "June") inputMonth = 6;
			else if (month == "July") inputMonth = 7;
			else if (month == "August") inputMonth = 8;
			else if (month == "September") inputMonth = 9;
			else if (month == "October") inputMonth = 10;
			else if (month == "November") inputMonth = 11;
			else if (month == "December") inputMonth = 12;

			cout << month << " " << year << endl;
			outfile << month << " " << year << endl;

			int days = daysInMonth(inputMonth, year);
			string calendar[] = {"Su","Mo","Tu","We","Th","Fr","Sa","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23", "24","25","26","27","28","29","30","31"};
			int dayLocation = dayOfWeek(inputMonth, 1, year);

			for (int i = 0; i < 7; i++) {
				cout << calendar[i] << " ";
			}
			cout << endl;
			for (int i = 0; i < 7; i++) {
				outfile << calendar[i] << " ";
			}
			outfile << endl;

			int dayCounter = 0;
			switch (dayLocation) {
			case 1: cout << setw(4); dayCounter = 1;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						cout << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						cout << " " << calendar[i] << " ";
					}
					else cout << calendar[i] << " ";
					dayCounter++;
				}

				outfile << setw(4); dayCounter = 1;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						outfile << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						outfile << " " << calendar[i] << " ";
					}
					else outfile << calendar[i] << " ";
					dayCounter++;
				}
				break;
			case 2:cout << setw(7); dayCounter = 2;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						cout << endl; 
						dayCounter = 0;
					}
					if (i < 16) {
						cout << " " << calendar[i] << " ";
					}
					else cout << calendar[i] << " ";
					dayCounter++;
				}

				outfile << setw(7); dayCounter = 2;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						outfile << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						outfile << " " << calendar[i] << " ";
					}
					else outfile << calendar[i] << " ";
					dayCounter++;
				}
				break;
			case 3:cout << setw(10); dayCounter = 3;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						cout << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						cout << " " << calendar[i] << " ";
					}
					else cout << calendar[i] << " ";
					dayCounter++;
				}
				outfile << setw(10); dayCounter = 3;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						outfile << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						outfile << " " << calendar[i] << " ";
					}
					else outfile << calendar[i] << " ";
					dayCounter++;
				}
				break;
			case 4:cout << setw(13); dayCounter = 4;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						cout << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						cout << " " << calendar[i] << " ";
					}
					else cout << calendar[i] << " ";
					dayCounter++;
				}
				outfile << setw(13); dayCounter = 4;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						outfile << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						outfile << " " << calendar[i] << " ";
					}
					else outfile << calendar[i] << " ";
					dayCounter++;
				}
				break;
			case 5:cout << setw(16); dayCounter = 5;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7){
						cout << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						cout << " " << calendar[i] << " ";
					}
					else cout << calendar[i] << " ";
					dayCounter++;
				}
				outfile << setw(16); dayCounter = 5;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						outfile << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						outfile << " " << calendar[i] << " ";
					}
					else outfile << calendar[i] << " ";
					dayCounter++;
				}
				break;
			case 6:cout << setw(19); dayCounter = 6;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						cout << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						cout << " " << calendar[i] << " ";
					}
					else cout << calendar[i] << " ";
					dayCounter++;
				}
				outfile << setw(19); dayCounter = 6;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						outfile << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						outfile << " " << calendar[i] << " ";
					}
					else outfile << calendar[i] << " ";
					dayCounter++;
				}
				break;
			case 7:cout << setw(0); dayCounter = 7;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						cout << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						cout << " " << calendar[i] << " ";
					}
					else cout << calendar[i] << " ";
					dayCounter++;
				}
				outfile << setw(0); dayCounter = 7;
				for (int i = 7; i < days + 7; i++) {
					if (dayCounter == 7) {
						outfile << endl;
						dayCounter = 0;
					}
					if (i < 16) {
						outfile << " " << calendar[i] << " ";
					}
					else outfile << calendar[i] << " ";
					dayCounter++;
				}
				break;
			}
		}
		else break;
		cout << endl;
		cout << "\nOutput File: " << filename << endl;
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

