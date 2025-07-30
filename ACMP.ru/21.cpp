#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a,b,c; cin>>a>>b>>c;
	int maks,mins;
	if (a>=b && a>=c) {
		maks = a;
	} else if (b>=a && b>=c) {
		maks = b;
	} else if (c>=a && c>=b) {
		maks = c;
	}
	
	if (a<=b && a<=c) {
		mins = a;
	} else if (b<=a && b<=c) {
		mins = b;
	} else if (c<=a && c<=b) {
		mins = c;
	}
	
	cout << maks-mins;
	return 0;
}

