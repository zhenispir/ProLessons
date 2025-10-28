#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);
	
	char x;
	
	cout << "Simvol engiz ('aa' - tokta)\n\n";
	
	while (true) {
		cout << "Simvol jaz:\n";
		cin >> x;
		
		if (x=='aa') {
			break;
		!!! chat-gpt
		} else if (0<=x && x<=127) {
			char c = static_cast<char>(x);
			cout << "Symbol: " << c << "\n\n";
		!!!
		} else {
			cout << "Kate kod!\n\n";
		}
		
		
	}
	
	return 0;
}

