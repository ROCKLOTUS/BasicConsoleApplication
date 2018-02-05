#include "stdafx.h"
#include "BasicConsoleApplication.h"


void printHello(void) {
	cout << "Hello world!" << endl;
	cout << endl;
}


void compareTwoNumber(void) {
	int a1, a2, result;
	cout << "Please input two number:\n";
	cin >> a1 >> a2;
	result = a1 - a2;
	cout << "a1 - a2 = " << result << endl;
	cout << endl;
}

//min is the inline function
inline int min(int a, int b) {
	return a > b ? b : a;
}
void findMinNum(void) {
	//find the min in two number
	int a, b, c;
	cout << "Input two number:\n";
	cin >> a >> b;
	c = min(a, b);
	cout << "min = " << c << endl;
	cout << endl;
}

void sort(int x, int y, int z) {
	int temp;
	if (x > y) {
		temp = x;
		x = y;
		y = temp;
	}
	if (z < x)
		cout << z << "," << x << "," << y << endl;
	else if (z < y)
		cout << x << "," << z << "," << y << endl;
	else
		cout << z << "," << x << "," << y << endl;


}

void sortMain(void) {
	cout << "Input three number:\n";
	int a, b, c;
	cin >> a >> b >> c;
	sort(a, b, c);

	cout << endl;
}

void logicOperator(void) {
	int a = 1, b = 2, m = 0, n = 0, k;
	k = (a == b > a) || (m = a);
	cout << k << "," << "," << n << endl;

}
//bitwise operator
//&,|,~
void bitwiseTest(void) {
	unsigned int a = 5, b = 18, c;
	c = a & b;
	cout << a << " & " << b << " = " << c << endl;
	c = a | b;
	cout << a << " | " << b << " = " << c << endl;
	c = a ^ b;
	cout << a << " ^ " << b << " = " << c << endl;
	c = ~a;
	cout << "~" << a << " = " << c << endl;

	//bit left-shift <<
	c = a << 3;
	cout << a << " << " << 3 << " = " << c << endl;

	//Çó×Ö½Ú
	cout << "byte of c = " << sizeof(c) << endl;
	cout << "byte of int = " << sizeof(int) << endl;

}

void formatControl(void) {
	int i, j;
	cout << "Please enter two number:";
	cin >> i>> j;
	cout << i << j << endl;
	cout << setw(10) << i << setw(10) << j << endl;
	cout << setfill('*') << setw(10) << i << setw(10) << j << endl;
}

void factorialSum(void) {
	int i = 0, t = 1, sum = 0;
	while (i < 9) {
		i++;
		t = t * i;
		if (i % 2)
			sum = sum + t;
	}
	cout << "sum = " << sum << endl;
}