
//#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	double fahren;
	double celsius;
	for (int f = 0; f < 6; f = f + 1) {
		cout << "Please input your fahrenhiet temperature." << endl;
		cin >> fahren;
		celsius = (5.0 / 9.0)* (fahren - 32);
		cout << "For a Fahrenheit temperature of " << fahren << " degrees, "
			<< "the equivalent Celsius temperature is " << celsius << " degrees." << endl;
	}
	system("PAUSE");
	return 0;
}