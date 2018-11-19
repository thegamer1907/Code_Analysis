#include <bits/stdc++.h>
using namespace std;

bool between(double t1, double t2, double p){
	if(t1 < p && p < t2){
		//cout << "Cannot go from " << t1 << " to " << t2 << " because of " << p << endl;
		return true;
	}
	//cout << "Can go from " << t1 << " to " << t2 << " through " << p << endl;
	//cout << (p > t1) << (p < t2) << endl;
	return false;
}

int a, b, c;
double h, m, s, t1, t2;

int main() {
	cin >> a >> m >> s >> b >> c;
	a %= 12;
	b %= 12;
	c %= 12;
	
	h = a / 12.0;
	m /= 60.0;
	s /= 60.0;
	m += s / 60.0;
	h += m / 12.0;
	
	t1 = b / 12.0;
	t2 = c / 12.0;
	if(t1 > t2){
		swap(t1, t2);
	}
	assert(t2 > t1);
	cerr << h << " " << m << " " << s << " " << t1 << " " << t2 << endl;

	bool side1 = !between(t1, t2, h) && !between(t1, t2, m) && !between(t1, t2, s) && !between(t1, t2, 1+h) && !between(t1, t2, 1+m) && !between(t1, t2, 1+s);
	bool side2 = !between(t2, t1+1, h) && !between(t2, t1+1, m) && !between(t2, t1+1, s) && !between(t2, t1+1, 1+h) && !between(t2, t1+1, 1+m) && !between(t2, t1+1, 1+s);

	if(side1 || side2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}
