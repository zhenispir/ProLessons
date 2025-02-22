#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int a,b; cin >> a >> b;
	if (a==1) {
		if (b==1) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	} else {
		if (b==1) {
			cout << "NO";
		} else {
			cout << "YES";
		}
	}
	
	return 0;
}

