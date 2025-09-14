#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int a=0, b=1,c;
	int i = 1;
	if (n>0) { 
		while (i<n) {
			c = a+b;
			a=b;
			b=c;
			++i;
		}
	} else {
		b=0;
	}
	
	cout << b;
	return 0;
}

