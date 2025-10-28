#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n; cin>>n;
	int ong_sandar = 0;
	int maxx = 0;
	for (int i=0; i<n; ++i) {
		int tem; cin>>tem;
		if (tem > 0) {
			ong_sandar++;
			maxx = max(maxx, ong_sandar);
		} else {
			ong_sandar = 0;
		}
	}
	cout << maxx;
	return 0;
}

