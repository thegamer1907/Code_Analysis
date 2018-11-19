#include<bits/stdc++.h>
#define LL long long
#define PII pair<int, int>
#define MP make_pair
#define PB push_back
#define F first
#define S second
using namespace std;
int h, m, s, t1, t2, hh, mm, ss;
bool check(int a, int b){
	if(a <= h && h < b) return false;
	if(a <= (double)m / 5 && (double)m / 5 < b) return false;
	if(a <= (double)s / 5 && (double)s / 5 <= b) return false;
	if(a <= hh && hh < b) return false;
	if(a <= (double)mm / 5 && (double)mm / 5 < b) return false;
	if(a <= (double)ss / 5 && (double)ss / 5 <= b) return false;
	return true;
}
int main(){
	cin >> h >> m >> s >> t1 >> t2;
	h %= 12;
	m %= 60;
	s %= 60;
	hh = h + 12;
	mm = m + 60;
	ss = s + 60;
	
	if(t2 < t1) swap(t1, t2);
	if(check(t1, t2) || check(t2, t1 + 12)) puts("YES");
	else puts("NO");

	return 0;
}