#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int k, m, n;
    cin >> k >> m >> n;

    if (n <= k) {
        cout << 2 * m;
    } else {
        int nese = ceil(2 * n / k); // ceil(2 * n / k) = (2 * n + k - 1) / k
        cout << nese * m;
    }

    return 0;
}

