#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,m; cin>>n>>m;
	if (n==m) {
		cout << n*m*4;
	} else {
		cout << (n+1)*m + n*(m+1) + n + m;
	}
	return 0;
}

