#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
ll ara[2*mx+8];
vector<ll>sum;
int main()
{
    ll n,m,c=0,total=0,a;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        sum.push_back(total+ara[i]);
        total=sum[i];
    }
    total=0;
    for(int i=0; i<m; i++)
    {
        cin>>a;
        total+=a;
        int p=lower_bound(sum.begin(),sum.end(),total)-sum.begin();
        if(total>=sum[n-1])
        {
            total=0;
            cout<<n<<endl;
        }
        else if(sum[p]==total)cout<<n-p-1<<endl;
        else cout<<n-p<<endl;
    }
}
