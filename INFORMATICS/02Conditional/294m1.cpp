#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a,b,c, m;
	cin >>a>>b>>c;
	m = max(max(a,b) , max(b,c));
	cout << m; 
	
	return 0;
}


