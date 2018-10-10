#include<bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define mem(a,b) memset(a,b,sizeof(a))
typedef long long int ll;
typedef long double ld;
ll mod=1e9+7;
ll inf=1e17;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll arr[100005];
    ll min1=inf;
    for(ll i=1;i<=n;i++)
    {
        cin>>arr[i];
        min1=min(min1,arr[i]);
    }


    ll curr=1+(min1)%n;
    ll val=min1;
    while(1)
    {
        if((arr[curr]-val)<=0)
            break;
        val++;
        curr++;
        if(curr==(n+1))
            curr=1;
    }

    cout<<curr<<endl;





    return 0;

}
