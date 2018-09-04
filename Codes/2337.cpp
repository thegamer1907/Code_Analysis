#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;
const int INF=(int)1e9+10;
const int MOD=(int)1e9+7;
int seen[10000001],pref[10000001];
bool sieve[10000001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(seen,0,sizeof(seen));
    memset(sieve,true,sizeof(sieve));
    pref[0]=pref[1]=pref[2]=0;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x,seen[x]++;
    for(int i=2;i<10000001;i++)
    {
        if(!sieve[i])
            continue;
        for(int j=i;j<10000001;j+=i)
            pref[i]+=seen[j],sieve[j]=false;
    }
    for(int i=3;i<10000001;i++)
        pref[i]+=pref[i-1];
    int q,l,r;
    cin>>q;
    for(int i=0;i<q;i++)
        cin>>l>>r,cout<<pref[min(r,10000000)]-pref[min(l-1,10000000)]<<"\n";
    return 0;
}
