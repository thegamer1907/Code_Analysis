#include <bits/stdc++.h>
#define rep(i,s,t) for(int i=(s),_t=(t);i<_t;++i)
using namespace std;
typedef long long ll;
const int INF=0x7fffffff;
template<class T>void rd(T &x)
{
	x=0;
	char c;
	while(c=getchar(),c<48);
	do x=x*10+(c^48);
		while(c=getchar(),c>47);
}
inline int ceiling(int a,int b)
{
	return (a+b-1)/b;
}
// EOT


int main()
{
	int n;
	cin>>n;
	int mn=INF,ans;
	rep(i,1,n+1)
	{
		static int tmp;
		rd(tmp);
		int t=ceiling(tmp-(i-1),n)*n+i;
		if(t<mn)
		{
			mn=t;
			ans=i;
		}
	}
	cout<<ans<<endl;
	return 0;
}
