#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);
	int jas;

	cout << "Jasyngyzdy enggizingiz:\n";
	cin >> jas;
	
	if (jas >= 18) {  
		cout << "Pravaga tabsyralasyng\n";
		cout << "Emtihannan otting be?\n ia nemese jok?";
		string jauap;
		cin >> jauap;
		
		if (jauap == "ia") {
			cout << "Mashina aidaiber";
		} else {
			cout << "Tagy tabsyr";
		}
		
	} else { 
		cout << "Pravaga tabsyraalmaisyng";
	}
	
	return 0;
}
