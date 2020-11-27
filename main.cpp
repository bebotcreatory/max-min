#include <iostream>
using namespace std;

int main() {
	double a,b,c,d,max,min;
	cout << "Nhap a:";
	cin >> a; // 3
	cout << "Nhap b:";
	cin >> b; // 7
	cout << "Nhap c:";
	cin >> c; // 2
	cout << "Nhap d:"; 
	cin >> d; // 1
	max = a; // max = 3
	min = a; // min = 3;
	(b > max) ? max = b : a; // 7 > 3 true => max = 7
	(c > max) ? max = c : a; // 2 > 7 fasle => max = 7
	(d > max) ? max = d : a; // 1 > 7 fasle => max  = 7
	(b < max) ? min = b : a; // 7 < 3 fasle => min = 3
	(c < max) ? min = c : a; // 2 < 3 true => min = 2
	(d < max) ? min = d : a; // 1 < 2 true => min = 1
	cout << "Max:" << max; // 7
	cout << "Min:" << min; // 1
}