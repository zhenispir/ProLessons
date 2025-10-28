#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a; cin>>a;
	int b = a/1000;
	int x = b/100+b/10%10+b%10;
	int c = a%1000;
	int y = c/100+c/10%10+c%10;
	if (x==y) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}

