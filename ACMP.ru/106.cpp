#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,a, heads=0, tails=0; cin>>n;
	for (int i=0; i<n; i++) {
		cin >> a;
		if (a==0) {
			heads += 1;
		} else {
			tails +=1;
		}
	}
	cout << min(heads, tails);
	return 0;
}

