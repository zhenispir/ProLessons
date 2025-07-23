#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	if (d>=b) {
		f = d-b;
	} else {
		f = 100+d-b;
		c = c-1;
	}
	e = c-a;
	cout << e << " " << f;
	return 0;
}


