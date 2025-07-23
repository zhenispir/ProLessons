#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int o=0, p=0, n=0;
	int y; cin >> y;
	for (int i = 0; i < y; ++i) {
		int x; cin >> x;
		if (x==0) {
			++o;
		} else if (x>0) {
			++p;
		} else if (x<0) {
			++n;
		}
		
	}
	cout<<o<<" "<<p<<" "<<n;
	
	return 0;
}


