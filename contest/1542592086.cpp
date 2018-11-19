
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define mem(a,b) memset(a,b,sizeof(a));
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define MP make_pair
#define ULL unsigned long long
#define LL   long long
#define inf 0x3f3f3f3f
#define md ((ll+rr)>>1)
#define ls (i<<1)
#define rs (ls|1)
#define eps 1e-8
#define ree freopen("in.txt","r",stdin);
#define bug pf("----------------");
#define N 300010
#define mod 475
#define double long double

string a;
string b;

int main(){
	cin>>a;
	int n;cin>>n;
	int fg=0;
	int fg1=0,fg2=0;
	rep(i,1,n){
		cin>>b;
		if(b[0]==a[1])fg1=1;
		if(b[1]==a[0])fg2=1;
		if(b==a)fg=1;
	}
	if(fg1&&fg2||fg)puts("YES");
	else puts("NO");
}
