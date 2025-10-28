#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,i=0; cin>>n;
	string yesno = "NO";
	while (n/2>=i) { //n>i
		if (pow(2,i)==n) {
			yesno = "YES";
			break;
		}
		++i;
	}
	cout << yesno;
	return 0;
}

