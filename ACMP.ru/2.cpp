#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	long long n, summ=0; cin>>n;
	summ = (n*(n+1))/2;
	/*for (long long i=1; i<=n; ++i) {
		summ += i;
	}*/
	cout << summ;
	return 0;
}

