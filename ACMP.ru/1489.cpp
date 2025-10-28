#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int k,n; cin>>k>>n;
	int bet = (n-1)/k+1;
	int jol = (n-1)%k+1;
	cout<<bet<<" "<<jol;
	return 0;
}
