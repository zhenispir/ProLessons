#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a,b;
    cin>>a>>b;
    if (a==0) {
    	if (b==0) {
    		cout<<"INF";
		} else {
			cout<<"NO";
		}
	} else {
		if (b%a!=0) {
    		cout<<"NO";
		} else {
			cout<<-1*b/a;
		}
	}
	return 0;
}


