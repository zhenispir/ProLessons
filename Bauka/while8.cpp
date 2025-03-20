#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int i = 0;
	while (i <= 5){
		cout << i << '\t' << pow(i, i) << endl;
		++i;
	}
	
	return 0;
}