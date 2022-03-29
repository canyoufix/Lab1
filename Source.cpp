#include <iostream>
#include "staticVar.h"
using namespace std;

int main() {
	A = A * ((B + C) % 6) + D++;
	B /= 7;
	C = (C - (A++ + B--)) / 3;
	D = (B & 63) | (C & 15) >> 2;

	cout << "A=" << A << endl << "B=" << B << endl;
	cout.unsetf(ios::dec);
	cout.setf(ios::oct);
	cout << "C=" << C << endl << "D=" << D << endl;
	return 0;
}

/* 
static int mas[5] = { 12,8,34,123 };
 
int main() {
	mas[0] = mas[0] * ((mas[1] + mas[2]) % 6) + mas[3]++;
	mas[1] /= 7;
	mas[2] = (mas[2] - (mas[0]++ + mas[1]--)) / 3;
	mas[3] = (mas[1] & 63) | (mas[2] & 15) >> 2;

	cout << "A=" << mas[0] << endl << "B=" << mas[1] << endl;
	cout.unsetf(ios::dec);
	cout.setf(ios::oct);
	cout << "C=" << mas[2] << endl << "D=" << mas[3] << endl;
	return 0;
}
*/