#include <bits/stdc++.h>
#define px first
#define py second

using namespace std;
typedef long long ll;
typedef double dd;
typedef pair<int, int> ii;
typedef vector<ii> vii;
int h, m, s, t1, t2;
bool check(){
	if((h <= t1 || h >= t2) && (m <= t1 || m >= t2) &&
	(s <= t1 || s >= t2))
		return true;
	if(h <= t2 && h >= t1 && m <= t2 && m >= t1 &&
	s <= t2 && s >= t1)
		return true;
	return false;
}
int main(){
	cin >> h >> m >> s >> t1 >> t2;
	if(h == 12) h = 0;
	if(t1 == 12) t1 = 0;
	if(t2 == 12) t2 = 0;
	h *= 5;
	t1 *= 5;
	t2 *= 5;
	h *= 2; m *= 2; s *= 2; t1 *= 2; t2 *= 2;
	if(s != 0){
		h++;
		m++;
	}
	else if(m != 0)
		h++;
	if(t1 > t2){
		int tmp = t1;
		t1 = t2;
		t2 = tmp;
	}
	//cout << h << " " << m << " " << s << " " << t1 << " " << t2 <<endl;
	if(check())
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}