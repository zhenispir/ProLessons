#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a; cin>>a;
	int q = a/1000;
	int w = a/100%10;
	int e = a/10%10;
	int r = a%10;
	if (q==r && w==e) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}

