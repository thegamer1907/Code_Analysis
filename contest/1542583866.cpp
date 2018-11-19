#include<bits/stdc++.h>
using namespace std;
double h,m,s,t1,t2;
bool check1(double x) {
	if(x>t1 && x<t2)
	    return true;
	return false;
}
bool check2(double x) {
	if(x<t1 || x>t2)
	    return true;
	return false;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> h >> m >> s >> t1 >> t2;
	if(t1==12)    t1=0;
	if(t2==12)    t2=0;
	if(h==12)    h=0;
	t1 = t1*5.0;
	t2 = t2*5.0;
	h = h*5.0;
	m += s/6.0/10.0;
	h += m/6.0/2.0;
	if(t1>t2)    swap(t1,t2);
	int cnt1 = 0 , cnt2 = 0;
	if(check1(h))    cnt1++;
	if(check1(m))    cnt1++;
	if(check1(s))    cnt1++;
	if(check2(h))    cnt2++;
	if(check2(m))    cnt2++;
	if(check2(s))    cnt2++;
	if(cnt1==0||cnt2==0)    cout << "YES" << endl;
	else    cout << "NO" << endl;
	return 0;
}

