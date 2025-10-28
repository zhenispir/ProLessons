#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a; cin>>a;
	int i=1;
	int sum=0;
	while (i<=a) {
		sum = sum + i; //sum += i
		++i;
	}
	cout << "Summa = "<< sum;
	return 0;
}


