#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	float a, b, c;
	cin >> a >> b >> c;
	
	// a-b<=c<=a+b C++ bolmaidy, Python bolady
	
	if ((a-b < c) && (c < a+b)) {
		if (a*a + b*b == c*c) {
			cout << "right";
		} else if (a*a + b*b < c*c) {
			cout << "obtuse";
		} else if (a*a + b*b > c*c) {
			cout << "acute";
		}
	} else {
		cout << "impossible";
	}
	
	return 0;
}
