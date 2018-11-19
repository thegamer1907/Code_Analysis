#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define rc(x) return cout<<x<<endl,0
#define pb push_back
#define in insert
#define er erase
#define fd find
#define fr first
#define sc second
typedef long long ll;
typedef long double ld;
const ll INF=0x3f3f3f3f3f3f3f3f;
const ll llinf=(1LL<<61);
const int inf=(1<<30);
const int nmax=1e5+50;
const int mod=1e9+7;
using namespace std;
int n,i,k,a[nmax],L=1,R;
ll f[nmax][21],nr[nmax],tot;
inline int read() {
    char c = getchar();
    while (c > '9' || c < '0') {
        c = getchar();
    }
    int next = 0;
    while (c >= '0' && c <= '9') {
        next = next * 10 + (c - '0');
        c = getchar();
    }
    return next;
}
void add(int i)
{
	tot-=(nr[a[i]]*(nr[a[i]]-1)/2);
	nr[a[i]]++;
	tot+=(nr[a[i]]*(nr[a[i]]-1)/2);
}
void del(int i)
{
	tot-=(nr[a[i]]*(nr[a[i]]-1)/2);
	nr[a[i]]--;
	tot+=(nr[a[i]]*(nr[a[i]]-1)/2);
}
void upd(int l,int r)
{
	while(L>l)add(--L);
	while(R<r)add(++R);
	while(L<l)del(L++);
	while(R>r)del(R--);
}
void solve(int d,int l,int r,int opl,int opr)
{
	if(l>r)return;
	int m=(l+r)>>1,i,bst=1;
	f[m][d]=llinf;
	for(i=opl;i<=min(opr,m);i++)
	{
		upd(i,m);
		if(f[m][d]>f[i-1][d-1]+tot)
		{
			f[m][d]=f[i-1][d-1]+tot;
			bst=i;
		}
	}
	solve(d,l,m-1,opl,bst);
	solve(d,m+1,r,bst,opr);
}
int main()
{
	//freopen("sol.in","r",stdin);
	//freopen("sol.out","w",stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);cout.tie(0);
	n=read(),k=read();
	for(i=1;i<=n;i++)a[i]=read();
	for(i=1;i<=n;i++)f[i][0]=llinf;
	for(i=1;i<=k;i++)solve(i,1,n,1,n);
	cout<<f[n][k]<<endl;
	return 0;
}
