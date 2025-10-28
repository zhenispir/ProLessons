#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int s,p; cin>>s>>p;
	int disckvadrat = s*s - 4*p;
	int disc = sqrt(disckvadrat);
	int x1 = (s + disc) / 2;
	int x2 = (s - disc) / 2;
	cout << x1 << " " << x2;
	return 0;
}

