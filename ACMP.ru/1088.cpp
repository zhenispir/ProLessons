#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	char x1, x2;
	int y1, y2, z1, z2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	if (x1 =='A') {
		z1 = 1;
	} else if (x1 =='B') {
		z1 = 2;
	} else if (x1 =='C') {
		z1 = 3;
	} else if (x1 =='D') {
		z1 = 4;
	} else if (x1 =='E') {
		z1 = 5;
	} else if (x1 =='F') {
		z1 = 6;
	} else if (x1 =='G') {
		z1 = 7;
	} else if (x1 =='H') {
		z1 = 8;
	} 
	if (x2 =='A') {
		z2 = 1;
	} else if (x2 =='B') {
		z2 = 2;
	} else if (x2 =='C') {
		z2 = 3;
	} else if (x2 =='D') {
		z2 = 4;
	} else if (x2 =='E') {
		z2 = 5;
	} else if (x2 =='F') {
		z2 = 6;
	} else if (x2 =='G') {
		z2 = 7;
	} else if (x2 =='H') {
		z2 = 8;
	}
	
	int dx = abs(z2-z1);
	int dy = abs(y2-y1);
	
	if ((x1 == x2) || (y1 == y2)) {
        cout << "Rook" << "\n";
    } 
	if (dx == dy) {
    	cout << "Bishop" << "\n";
	} 
	if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) {
		cout << "Knight" << "\n";
	} 
	if ((dx == dy) || (x1 == x2) || (y1 == y2)) {
		cout << "Queen" << "\n";
	} 
	if (dx <= 1 && dy <= 1) {
		cout << "King" << "\n";
	} 
	if ((x1 == x2 && ((y1 == 2 && (y2 == 3 || y2 == 4)) || (y2 - y1 == 1 && y1 > 1)))) {
		cout << "Pawn" << "\n";
	} 
	if ( !((x1 == x2) || (y1 == y2)) &&
	!(dx == dy) &&
	!((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) &&
	!((dx == dy) || (x1 == x2) || (y1 == y2)) &&
	!(dx <= 1 && dy <= 1) && 
	!((x1 == x2 && ((y1 == 2 && (y2 == 3 || y2 == 4)) || (y2 - y1 == 1 && y1 > 1))))
	){
		cout << "Nobody" << "\n";
	}
	return 0;
}

