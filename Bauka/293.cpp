#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int a, b;
	cin >> a; 
	cin >> b;
	if( a > b ){
		cout << "1";
	} else if ( a < b ){
		cout << "2";
	} else {
		cout << "0";
	}
}
