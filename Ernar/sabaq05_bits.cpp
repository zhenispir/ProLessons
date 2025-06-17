#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	unsigned char a, b, c;
	a = 14;  // 1 1 1 0
	b = 10;  // 1 0 1 0
	c = int(a & b); // AND 
	cout << c; //  1 0 1 0
	
	return 0;
}


