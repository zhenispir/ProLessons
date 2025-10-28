#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int s;
    cin >> s; //5

    int a = 1;
    int count = 0;

    while (count < s) {
        for (int i = 0; i < a && count < s; ++i) {
            cout << a << " ";
            count++;
        }
        ++a;
    }

	return 0;
}


