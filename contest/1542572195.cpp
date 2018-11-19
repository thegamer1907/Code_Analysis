#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <sstream>
#include <climits>

using namespace std;


//int mycomp(int a, int b) { return a < b; }
struct per {
	int a, b, s;
};


int mycomp(per a, per b) { return a.b-a.a < b.b - b.a; }


int main() {
	// your code goes here
	//int n; scanf("%d",&n);

	double h, m, s, t1, t2; cin >> h >> m >> s >> t1 >> t2;

	if (s != 0)m += 0.5;
	if (s != 0 || m != 0)h += 0.5;

	int p = t1;
	//move forward
	while (true) {
		if (p == 11) {
			if (h == 12 || h == 11.5 || (m > 55 && m <= 60) || m == 0 || (s > 55 && s <= 60) || s == 0)break;
			if(t2==12)return cout << "yes", 0;
			p = 12;
		}
		else if (p == 12) {
			if (h == 1 || h==12.5 ||  (m > 0 && m <= 5) || (s > 0 && s <= 5) )break;
			if (t2 == 1)return cout << "yes", 0;
			p = 1;
		}
		else {
			if (h == p + 1 || h==p+0.5 || (m > 5 * p && m <= 5 * p + 5) || (s > 5 * p && s <= 5 * p + 5))break;
			if (p + 1 == t2)return cout << "yes", 0;
			p++;
		}
	}

	p = t1;
	while (true) {
		
		if (p == 1) {
			if (h == 12 || h==12.5 ||  (m >= 0 && m < 5) || (s >= 0 && s < 5))return cout << "no", 0;
			if (t2 == 12)return cout << "yes", 0;
			p = 12;
		}
		else {
			if (h == p - 1 || h==p-0.5 || (m >= 5 * p-5 && m < 5 * p) || (s >= 5 * p - 5 && s < 5 * p))return cout << "no", 0;
			if (p - 1 == t2)return cout << "yes", 0;
			p--;
		}
	}

	return cout<<"no",0;
	
}
