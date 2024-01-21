#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;
/*int main()
{
	/* bai1
	int a, b;
	cin >> a >> b;
	long long tich = 1ll * a * b;
	float thuong = (float)a / b;
	
	//cout << "Name : FET\n";
	//cout << "Date of birth : 2026" << endl;
	cout << a + b << " " << a - b << " " << tich << " " << fixed << setprecision(2) << thuong << endl;
	//cout << fixed << setprecision(2) << a << endl ;*/

	/*bai2
	int r;
	cin >> r;
	double cv = 2 * 3.14 * r;
	double dt = 3.14 * r * r;
	cout << fixed << setprecision(2) << cv << " " << dt << endl;*/

	/*bai3
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	cout << fixed << setprecision(2) << dis << " " << endl;
return 0;*/
void xiaoying(int a, int b, int c) {
		cout << a *b * c << endl;
	}
void tang(int n) {
	n += 100;
}
int tong(int n) {
    int tong = 0;
	for (int i = 0; i <= n; i++) {
		tong += i;
	}return tong;

}
int main() {
	
	int n = 10;
	//int S = tong(n);
	cout << tong(n) << endl;
	return 0;
}
	













	



	

