#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t,a; cin >> t;
	int minn=30000, maxx=0; 
	for (int i=0; i<t; ++i) {
		cin >> a;
		if (a < minn) {
			minn = a;
		}
		if (a > maxx) {
			maxx = a;
		}
	} 
	cout << minn << " " << maxx;
	return 0;
}

