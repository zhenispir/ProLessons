#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a; cin>>a;
	int r = 1;
	int i = 0;
	while (i<a) {
		r *= 2;
		++i;
	}
	cout<<r;
	return 0;
}


