#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define all(c) (c).begin(),(c).end()
#define FOR(i,n) for (int i = 0; i < n; i++)
using namespace std;
int a[500005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);

    int j=n,i=n/2;
    while(i>0 && j>n/2)
    {
        if(a[j]>=2*a[i])
        {
            a[i]=0;
            i--;
            j--;
        }
        else
        {
            i--;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=0)
            ans++;
    }
    cout<<ans;
    return 0;
}