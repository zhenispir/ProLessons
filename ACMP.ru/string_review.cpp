#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string a = "Yernar";
	cout << a << '\n'; // Yernar
	cout << a[2]<< '\n'; // r
	// C++ tilinde sanau 0-den bastalady - INDEKS
	cout << a.length() << '\n'; // 6 
	cout << a.size() << '\n'; // 6
	cout << a[a.size()-1]<< '\n'; // r - songgy arip
	a.append(" Zhenis"); // art jakka birneshe aripti kosu
	cout << a << '\n';
	a.push_back('s'); // art jakka bir arip kosu ushin
	cout << a << '\n';
	a.pop_back();
	a.pop_back(); // art jagynan bir arip joyu ushin
	cout << a << '\n'; 
	a.insert(6, " C++"); // araga birneshe belgi kosu ushin
  	cout << a << '\n'; 
  	a.erase(4, 2); // 5-ten bastap 2 simboldy joiady
  	cout << a << '\n'; 
  	a.erase(a.size()-1, 1); // erase arkyly songggy aripti joyu
  	cout << a << '\n';
  	a.replace(5, 3, "Python"); // 5-ten bastap 3-simvoldy Python men ozgertedi
  	cout << a << '\n'; 
  	string b = a.substr(5, 6); // 5-ten bastap 6-simvol alady
  	cout << b << '\n';
  	int find = a.find("n"); // sol jaktan tabu - indeks beredi
  	cout << find << '\n';
  	int rfind = a.rfind("n"); // ong jaktan - indeks beredi
  	cout << rfind << '\n'; 
  	int first = a.find_first_of("aeiou"); // sol jaktan - birneshe aripten birinshisin indeksin tabu
  	cout << first << '\n'; 
  	int last = a.find_last_of("aeiou"); // ong jaktan - birneshe aripten birinshisin indeksin tabu
  	cout << last << '\n'; 
  	
  	// stringding arbir arpin aludyng joly
  	for (auto asan = a.begin(); asan != a.end(); asan++) {
  	    cout << *asan << '\n';
  	}
  	cout << "\n**************\n";
  	// stringding arbir arpin aludyng joly
  	for (auto rasan = a.rbegin(); rasan != a.rend(); rasan++) {
  	    cout << *rasan << '\n';
  	} 
  	cout << "\n clearden aldy: "<< a<< '\n'; 
  	a.clear(); // barlyk zatty joiady
  	cout << "\n clearden song: "<< a<< '\n'; 
	return 0;
}

