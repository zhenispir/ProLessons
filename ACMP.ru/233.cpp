#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,a, maxx=0, k; cin>>n; 
	string answer = "No crash";
	for (int i=0; i<n; ++i) {
		cin >> a;
		if (a <= 437) {
			answer = "Crash ";
		} 
		if (a > maxx && a <= 437) {
			maxx = a;
			k = i+1;
		}
	}
	if (answer == "No crash") {
		cout << answer;
	} else {
		cout << answer << k
	}
	return 0;
}

