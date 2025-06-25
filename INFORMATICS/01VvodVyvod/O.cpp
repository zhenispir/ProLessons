#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a,b,n,r,k;
	cin >>a>>b>>n;
	
	r = n*a + n*b / 100;
	k = n*b % 100;
	
	cout << r <<" "<< k;
	return 0;
}


