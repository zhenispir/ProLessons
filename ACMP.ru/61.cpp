#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int aocko=0, bocko=0;
	for (int i=0; i<4; ++i) {
		int a,b; cin>>a>>b;
		aocko +=a; bocko +=b;
	}
	if (aocko>bocko) {
		cout<<1;
	} else if (aocko==bocko) {
		cout<<"DRAW";
	} else {
		cout<<2;
	}
	return 0;
}

