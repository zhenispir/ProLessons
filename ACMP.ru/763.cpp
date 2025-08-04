#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int x1,y1; cin>>x1>>y1;
	if (x1==1 && y1==1){
		cout << 0;
	} else if (x1==y1) {
		cout << 2;
	} else {
		cout << 1;
	}
	return 0;
}

