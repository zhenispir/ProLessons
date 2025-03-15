#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int h1, h2, v1, v2;
	cin >> h1 >> v1 >> h2 >> v2;
	
	if ((h1==h2 || v1==v2) || (abs(h2-h1) == abs(v2-v1))) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}


