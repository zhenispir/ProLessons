#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a,b,c; cin>>a>>b>>c;
	if (a>727||b>727||c>727||a<94||b<94||c<94){
		cout << "Error";
	} else {
		cout << max(max(a,b),c);
	}
	return 0;
}

