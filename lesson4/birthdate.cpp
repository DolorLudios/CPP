#include <iostream>

using namespace std;

struct myBirthDay {
	unsigned int year : 12;
	unsigned int month : 4;
	unsigned int day : 5;
	unsigned int hours : 5;
	unsigned int minutes : 6;
	unsigned int seconds : 6;
};
int main() {
	myBirthDay Date;
	Date.year = 2003;
	Date.month = 12;
	Date.day = 4;
	Date.hours = 18;
	Date.minutes = 36;
	Date.seconds = 24;
	cout << "My birthdate: " << Date.year << ":" << Date.month << ":" << Date.day << endl;
	cout << sizeof(Date) << endl;
}