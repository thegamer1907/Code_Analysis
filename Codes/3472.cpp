//By Akanesasu
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cctype>
#include<ctime>
#include<cstdlib>
#include<string>
#include<queue>
#include<cmath>
#include<set>
#include<map>
#include<bitset>
#include<vector>
#define rep(x,a,b) for (int x=int(a);x<=(int)(b);x++)
#define drp(x,a,b) for (int x=int(a);x>=(int)(b);x--)
#define cross(x,a) for (int x=hd[a];~x;x=nx[x])
#define ll long long
#define pii pair<int,int>
#define pdd pair<double,double>
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
#define pb push_back
#define VI vector<int>
#define VS vector<string>
using namespace std;
inline ll rd(){
	ll x=0;int ch=getchar(),f=1;
	while (!isdigit(ch)&&(ch!='-')&&(ch!=EOF)) ch=getchar();
	if (ch=='-'){f=-1;ch=getchar();}
	while (isdigit(ch)){x=(x<<1)+(x<<3)+ch-'0';ch=getchar();}
	return x*f;
}
inline void rt(ll x){
	if (x<0) putchar('-'),x=-x;
	if (x>=10) rt(x/10),putchar(x%10+'0');
		else putchar(x+'0');
}
ll check(ll n,ll k){
	ll ret=0;
	while (n){
		ret+=min(n,k),n-=min(n,k);
		n-=n/10;
	}
	return ret;
}
ll n;
int main(){
	n=rd();
	ll l=1,r=(n+1)/2;
	while (l!=r){
		ll mid=l+r>>1;
		if (check(n,mid)>=(n+1)/2) r=mid;else l=mid+1;
	}
	rt(l),putchar('\n');
}
