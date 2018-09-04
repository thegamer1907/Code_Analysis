/*     !ya khoda!     */
#include<bits/stdc++.h>

#define ll long long
#define ld long double

#define pp push
#define po pop()
#define pb push_back
#define pf push_front
#define pob pop_back()
#define pof pop_front()

#define F first
#define S second
#define mkp make_pair
#define pll pair<ll,ll>

#define poow(x) (1LL<<(x))
/*==========================================================================*/
using namespace std;
/*==========================================================================*/
const ll N=1e6+100 , M=1e7+1;
ll n,x,a[M],f[M],q[M];
ll m,l,r;
bool p[M];
/*==========================================================================*/
int main()
{
    ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie();

	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;   a[x]++;
	}

	p[0]=p[1]=1;
	for(int i=2;i<M;i++)
		if(!p[i])
		{
			if(i*i<=M)
				for(int j=i*2;j<M;j+=i)   p[j]=1;
			for(int j=i;j<M;j+=i)   f[i]+=a[j];
		}

	for(int i=1;i<M;i++)
		q[i]=q[i-1]+f[i];

	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>l>>r;
		cout<<q[min(r,M-1)]-q[min(l,M)-1]<<endl;
	}

	return 0;

}
