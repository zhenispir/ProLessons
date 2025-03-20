#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a = 0;	// starting point
	
	while (a <= 20) {	// condition (stopping point)
		cout << a << '\t' << a*a << '\n';
		a += 1;   // increment
	}
	
	return 0;
}


