#include <iostream>
#include <string>
using namespace std;
int main() {
int year;
string result;
cout << "Enter a year: ";
cin >> year;
result = ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
? "Leap Year"
: "Not a Leap Year";
cout << year << " is " << result;
return 0;
}