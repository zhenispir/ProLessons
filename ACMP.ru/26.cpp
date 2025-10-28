#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    int x = x1 - x2;
    int y = y1 - y2;
    int rsum = r1 + r2;
    int rsumaralyk = rsum * rsum;
    int raralyk = abs(r2-r1)*abs(r2-r1);
    int aralyk = x*x + y*y;
    if (aralyk > r2) {
    	cout << "NO";
	} else if (aralyk < rsumaralyk) {
		cout << "NO";
	} else {
		cout << "YES";
	}
	return 0;
}

