#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    int uakyt1 = h1*3600 + m1*60 + s1;
    int uakyt2 = h2*3600 + m2*60 + s2;
    int result = uakyt2 - uakyt1;
    cout << result;
	return 0;
}


