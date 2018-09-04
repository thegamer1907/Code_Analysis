#include <bits/stdc++.h>
#include <bitset>
#define ll long long
#define pb push_back
#define f first
#define s second
#define mod 1000000007
#define hurry ios::sync_with_stdio(false)
#define PI 3.141592654
#define xx (int) 2e5+3
//1715
using namespace std;

ll N,a[xx],ans,sum;
map<ll,int> mp;

int main()
{
    hurry;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cin>>a[i];
        sum+=a[i];
        mp[sum]=i;
    }
    sum=0;
    for(int i=N;i>0;i--)
    {
        sum+=a[i];
        if(mp[sum] < i && mp[sum]) ans=max(ans,sum);
    }
    cout<<ans;
    return 0;
}
/*


*/
