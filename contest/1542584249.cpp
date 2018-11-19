#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main(){
	int h, m, s, t1, t2;
	cin >> h >> m >> s;
	cin >> t1 >> t2;
	
	double ph = h;
	if (m || s) ph += 0.5;
	
	double pm = m / 5;
	if ((m % 5) || s) pm += 0.5;
	
	double ps = s / 5;
	if (s % 5) ps += 0.5;

	if (ph > 12) ph -= 12;
	if (pm > 12) pm -= 12;
	if (ps > 12) ps -= 12;
	
	t1 = t1%12;
	t2 = t2%12;
	bool b = true;
	if (t2 < t1) swap(t1, t2);
	
	if ((ph > t1 && ph < t2) ||
		(pm > t1 && pm < t2) ||
		(ps > t1 && ps < t2)){
		b = false;
	}
	bool b2 = true;
	if (t2 < max(max(ph, pm), ps) ||
		t1 > min(min(ph, pm), ps)){
		b2 = false;
	}
	b = b || b2;
	cout << (b? "YES" : "NO") << endl;
}