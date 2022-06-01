#include<iostream>
#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
	return fabs(a-b)<= 0.001;
}
int main() {
	double a = -156.24037;
	double b = -156.24038;
	cout << approx_equals(a, b) << endl;
	return 0;
}