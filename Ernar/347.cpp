#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        if (n == 0) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}


