#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int b1, b2, c1, c2;
	cin >>b1>>b2>>c1>>c2;
	if (b1==c1 || c1==c2) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}


