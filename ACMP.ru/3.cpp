#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	long long a; cin>>a;
	long long aldyn = a / 10;
	long long kelesi = aldyn + 1;
	long long kobeitu = aldyn * kelesi;
	long long result = kobeitu * 100 + 25;
	cout<<result;
	return 0;
}


