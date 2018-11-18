#include <bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
int main(){

	cin >> h >> m >> s >> t1 >> t2;

	m /= 5;
	if(!m) m = 12;
	s /= 5;
	if(!s) s = 12;

	int before = 0, after = 0;

	if(t1 > t2) swap(t1,t2);

	if(t1 <= h and t2 > h) after = 1;
	else before = 1;

	if(t1 <= m and t2 > m) after = 1;
	else before = 1;

	if(t1 <= s and t2 > s) after = 1;
	else before = 1;

	if(after and before){
		cout << "NO\n";
		return 0;
	}
	else cout << "YES\n";

	return 0;
}
