#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a = 3;
	string login = "ernar", password = "ernar2025";
	string alogin, apassword; 
	
	do {
		cin >> alogin >> apassword;
		if (login==alogin && password == apassword) {
			cout << "Durys, kiringiz";
		} else {
			cout << "Kate, tagy jaz";
		}
		a -= 1;
	} while (a==0);
	return 0;
}

