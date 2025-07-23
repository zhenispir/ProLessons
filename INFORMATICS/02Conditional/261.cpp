#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0) {
        if (b == 0) {
        	if (c == 0) {
                if (d != 0) {
                    cout << "INF";
                } else {
                    cout << "NO";
                }
            } else { 
            	if (d % c == 0) {
                    cout << "INF";
                } else {
                    cout << "INF";
                }
            }
        } else {
        	cout << "NO";
        }
    } else {
        if (b % a == 0) {
            int x = -b / a;
            if (c * x + d != 0) {
                cout << x;
            } else {
                cout << "NO";
            }
        } else {
            cout << "NO";
        }
    }
	return 0;
}


