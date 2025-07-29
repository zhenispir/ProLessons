#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	long long a,b; cin>>a>>b;
	long long k = a%b;
	if (k<0) {
		k = k + abs(b);
	}
	cout<<k;
	return 0;
}


