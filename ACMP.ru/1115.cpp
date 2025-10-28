#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a,b; cin>>a>>b;
	if (b%a==0) {
		cout<<b/a<<" "<<0<<" "<<0;
	} else {
		cout<<b/a<<" "<<b%a<<" "<<a-(b%a);
	}
	return 0;
}


