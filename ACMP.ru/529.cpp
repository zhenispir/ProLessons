#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	long long a,b,c,d; cin>>a>>b>>c>>d;
	long long x = abs(a-c);
	long long y = abs(b-d);
	long long r = sqrt((x*x)+(y*y));
	cout << r;
	return 0;
}

