#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a,b,c;
	cin >>a>>b>>c;
	if (a>=b && a>=c) {
		cout << a;
	} else if (b>=a && b>=c) {
		cout << b;
	} else if (c>=b && c>=a) {
		cout << c;
	}
	
	return 0;
}


