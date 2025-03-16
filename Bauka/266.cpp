#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	// if (condition)
	
	if ((x1 > 0 && x2 > 0) && (y1 > 0 && y2 >0)) {
		cout << "YES";
	} else if ((x1 < 0 && x2 < 0) && (y1 > 0 && y2 >0)){
		cout << "YES";
	} else if ((x1 > 0 && x2 > 0) && (y1 < 0 && y2 <0)) {
		cout << "YES";
	} else if ((x1 < 0 && x2 < 0) && (y1< 0 && y2 <0)){
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}


