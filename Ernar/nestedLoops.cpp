#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int sagat=0;
	while (sagat<2) {
		for (int minut=0; minut<60; ++minut) {
			for (int sekund=0; sekund<60; ++sekund) {
				cout << sagat<<":"<<minut<<":"<<sekund<<"\n";
			}
		}
		++sagat;
	}
	return 0;
}


