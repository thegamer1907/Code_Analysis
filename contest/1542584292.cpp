#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define RREP(i,a,b) for(int i=(a);i>=(b);i--)
typedef long long ll; typedef long double ld;
using namespace std;
const int INF=1e9, MOD=1e9+7;
int h,m,s,t1,t2;
int li[60*3+10]={};

int main(){
	cin >> h >> m >> s >> t1 >> t2;
	li[h*5]=true;	li[(12+h)*5]=true;	li[(24+h)*5]=true;
	li[m]=true;		li[60+m]=true;		li[120+m]=true;
	li[s]=true;		li[60+s]=true;		li[120+s]=true;
	
	if(t1>t2) swap(t1,t2);
	bool f=true;
	REP(i,t2*5,(t1+12)*5) if(li[i]) f=false;
	if(f){cout << "YES" << endl; return 0;} f=true;
	
	REP(i,(t1+12)*5,(t2+12)*5) if(li[i]) f=false;
	if(f){cout << "YES" << endl; return 0;} f=true;
	
	cout << "NO" << endl;
	return 0;
}
