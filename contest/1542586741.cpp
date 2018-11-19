#include <bits/stdc++.h>
using namespace std;
#pragma comment(linker,"/stack:1024000000,1024000000")
#define db(x) cout<<(x)<<endl
#define pc(x) putchar(x)
#define ps(x) puts(x)
#define pf(x) push_front(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ms(x,y) memset(x,y,sizeof x)
typedef long long LL;
const double pi=acos(-1),eps=1e-9;
const LL inf=0x3f3f3f3f,mod=1e9+7,maxn=1123456;
int h,m,s,t1,t2,v[22],flag,flag1;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>h>>m>>s>>t1>>t2;
	h%=12,v[h]=v[m/5]=v[s/5]=1;
	if(!m&&!s)
		v[(h+11)%12]=1;
	if(!s&&!(m%5))
		v[(m/5+11)%12]=1;
	if(!(s%5))
		v[(s/5+11)%12]=1;
	for(int i=t1;i!=t2;i++){
		if(i>11)
			i-=12;
		if(v[i]){
			flag=1;
			break;
		}
	}
	for(int i=t2;i!=t1;i++){
		if(i>11)
			i-=12;
		if(v[i]){
			flag1=1;
			break;
		}
	}
	db(flag&&flag1?"NO":"YES");
	return 0;
}