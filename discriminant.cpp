#include <iostream>
#include <conio.h>
#include <math.h>

#define _USE_MATH_DEFINES

using namespace std;

void main() {
	int a, b, c, d;
	float x1, x2;
	cout << "Please enter \"a\": \n";
	cin >> a;
	if (a != 0) {
		cout << "Please enter \"b\": \n";
		cin >> b;
		cout << "Please enter \"c\": \n";
		cin >> c;
		d = pow(b, 2) - 4 * a * c;
		if (d > 0) {
			x1 = (-b + sqrt(d)) / 2 * a;
			x2 = (-b - sqrt(d)) / 2 * a;
			cout << "You have two square roots: x1 = " << x1 << " and x2 = " << x2 << endl;
		}
		else if (d == 0) {
			x1 = x2 = -b / 2 * a;
			cout << "You have only square root: x1 = x2 = " << x1 << endl;
		}
		else
			cout << "You have no roots.\n";
	}
	else
		cout << "\"a\" shouldn't be equal to zero. Please try one more time.\n";
	_getch();
 }