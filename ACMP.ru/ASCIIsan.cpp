#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);
	int x;
	
	cout << "San engiz (-1 - tokta)\n\n";
	
	while (true) {
		cout << "Sanyngdy jaz:\n";
		cin >> x;
		
		if (x==-1) {
			break;
		} else if (0<=x && x<=127) {
			char c = static_cast<char>(x);
			cout << "Symbol: " << c << "\n\n";
		} else {
			cout << "Kate kod!\n\n";
		}
		
		
	}
	
	return 0;
}

