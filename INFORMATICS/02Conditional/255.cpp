#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a1, a2, b1, b2;
	cin>>a1>>a2>>b1>>b2;
	if (abs(a1-b1) == abs(a2-b2)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}


