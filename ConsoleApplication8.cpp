#include<iostream>
using namespace std;
int main() {
	int x, y, z, x1, y1, z1, r;
	cin >> x >> y >> z;
	cin >> x1 >> y1 >> z1;
	r = (x1 * 3600 + y1 * 60 + z1) - (x * 3600 + y * 60 + z);
	cout << r / 3600 << ":" << r % 3600 / 60 << ":" << r % 3600 % 60;
}