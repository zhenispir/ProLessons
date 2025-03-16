#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int n, m, k;
	cin >> n >> m >> k;
	
	if ((k%n == 0 || k%m == 0) && k < n*m) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}
