#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int y; 
	cin >> y;
	if ((y%4==0 && y%100!=0) || y%400==0) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}


