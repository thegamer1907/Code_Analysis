#include <bits/stdc++.h>
#define fr(x) scanf("%d", &x)
using namespace std;

string a[100010];

int between[20];
int atpos[20];

bool check(int s, int f) {
	if(s==f) return true;
	if(between[s%12] || atpos[(1+s)%12]) return false;
	return check((1+(s%12)), f);
}

signed main(){
	int h, m, s, t1, t2;
	fr(h);
	fr(m);
	fr(s);
	fr(t1);
	fr(t2);
	if(m || s) {
		between[h%12] = 1;
	}
	else{
		atpos[h%12] = 1;
	}
	if((m%5) || s) {
		between[(m/5)%12] = 1;
	}
	else{
		atpos[(m/5)%12] = 1;
	}
	if(s%5){
		between[(s/5)%12] = 1;
	}
	else{
		atpos[(s/5)%12] = 1;
	}
	if(check(t1, t2) || check(t2, t1)) printf("YES\n");
	else printf("NO\n");
	return 0;
}