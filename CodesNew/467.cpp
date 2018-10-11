#include <bits/stdc++.h>
using namespace std;
long long n,t,a[1000005],as[1000005];
bool ok(long long mid)
{
	for( int i=1 ; i+mid-1 <= n ; ++i )
	{
		int sum = as[i+mid-1]-as[i-1] ;
		if(  sum <= t )
			return 1;
	}
	 return 0;
}

int BS()
{
	long long l=0 , r =2e9+100;
	while(l < r)
	{
		long long mid = l +(r-l+1)/2;
		if(ok(mid))
			l = mid ;
		else
			r = mid -1;
	}
	return l;
}
void input()
{
	cin>>n>>t;
	for(int i=0 ;i <n ; ++i)
	cin>>a[i];
}
int main()
{
	input();
	partial_sum(a,a+n,as+1);
	cout<<BS()<<endl;
	return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
std::vector<long long> v;
int n;long long m,x;

int lb(int idx)
  {
    int lo=idx,hi=n,mid,lmid=-1;
    while(lo<=hi)
      {
        mid = (lo+hi);
        if(mid%2!=0)mid++;
        mid/=2;
        // cout<<lo<<' '<<hi<<' '<<mid<<endl;
        if(v[mid]-v[idx-1]<=m)lo=mid;
        else hi = mid-1;
        if(lmid==mid)break;
        lmid=mid;
        // cout<<lo<<' '<<hi<<' '<<mid<<endl;
      }
      if(v[mid]-v[idx-1]<=m)return mid;return 0;
  }
int main()
    {
      // cout<<~(-1);
      scanf("%d %lld",&n,&m );
      v.push_back(0);
      for(int i=0;i<n;i++)
        v.push_back((scanf("%lld",&x ),x));
      // v.push_back((long long)0);
      // for(int i=n-1;i>=0;--i)v[i]+=v[i+1];
      for(int i=1;i<=n;++i)v[i]+=v[i-1];
      int mx=-1;
      for(int i=1;i<=n;i++)
        mx=max(mx,lb(i)-i);
      cout<<mx+1;
    }*/