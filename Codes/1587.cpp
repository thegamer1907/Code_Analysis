#include <bits/stdc++.h>
using namespace std;
long long n,s,tans;
const int  N= 1e5 + 100;
long long a[N],b[N];
bool solve(long long k)
{
        for(long long i=1;i<=n;i++)
                b[i]=a[i]+i*k;
        sort(b+1,b+1+n);
        long long temp=0;
        for(long long i=1;i<=k;i++)
        {
                temp+=b[i];
                if(temp>s)
                        return false;
        }
        tans=temp;
        return true;
}
int main()
{
        cin >> n >> s;
        for(long long i=1;i<=n;i++)
                cin >> a[i];
        long long l=0,r=n,ans=0;
        while(l<=r)
        {
                long long mid=(l+r)>>1;
                if(solve(mid))
                {
                        ans=mid;
                        l=mid+1;
                }
                else
                        r=mid-1;
        }
        cout << ans << " " << tans << endl;

        return 0;
}
