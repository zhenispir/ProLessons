#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a,b,c,d; cin>>a>>b>>c>>d;
	int result,x;
	for (int i=-100; i<=100; ++i) {
		x=i;
		result = a*x*x*x + b*x*x + c*x + d;
		if (result == 0) {
			cout << x << " ";
		}
	}
	return 0;
}

