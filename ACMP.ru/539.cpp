#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a; cin>>a;
	if (a==1) {
		cout << 0;
	} else if (a%2==0) {
		cout << a/2;
	} else {
		cout << a;
	}
	return 0;
}

