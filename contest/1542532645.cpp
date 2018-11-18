#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pi acos(-1)
#define ll long long
#define F(n) FI(i,n)
#define FI(i,n) FL(i,0,n)
#define FL(i,l,n) for(int i=l;i<n;++i)
#define mod 1000000009


int main(){
	bool cross[13] = {};
	int h,m,s; cin>>h>>m>>s;
	h%=12;
	cross[h] = 1;
	cross[m/5] = 1;
	cross[s/5] = 1;
	int t1,t2; cin>>t1>>t2;
	t1 %= 12;t2 %= 12;
	bool ok = 1;
	int tt1 = t1,tt2 = t2;
	for( ; t1 != t2 ;t1 = (t1+1)%12){
		if(cross[t1]){
			ok = 0;
			break;
		}
	}
	if(ok){
		printf("YES");
		return 0;
	}
	ok = 1;
	for( ; tt2 != tt1 ; tt2 = (tt2+1)%12){
		if(cross[tt2]){
			ok = 0;
			break;
		}
	}
	if(ok){
		printf("YES");
		return 0;
	}
	printf("NO");
}
