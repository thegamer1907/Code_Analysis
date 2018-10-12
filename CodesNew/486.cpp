#include<bits/stdc++.h>
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
    }
