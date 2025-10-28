#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a1,a2,a3,b1,b2,b3;
	cin>>a1>>a2>>a3>>b1>>b2>>b3;
	int maxa = max(max(a1,a2),a3);
	int ortaa;
	int mina = min(min(a1,a2),a3);
	int maxb = max(max(b1,b2),b3);
	int ortab;
	int minb = min(min(b1,b2),b3); 
	
	if (a1==mina || a1==maxa) {
		if (a2==mina || a2==maxa){
			ortaa = a3;
		} else {
			ortaa=a2;
		}
	} else {
		ortaa = a1;
	}
	
	if (b1==minb || b1==maxb) {
		if (b2==minb || b2==maxb){
			ortab = b3;
		} else {
			ortab=b2;
		}
	} else {
		ortab = b1;
	}
	
	int result = maxa*maxb + ortaa*ortab + mina*minb;
	cout << result;
	return 0;
}

