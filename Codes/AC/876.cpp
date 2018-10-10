#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define ff first
#define ss second

using namespace std;

const int N=1e6+7;

//scanf("%d",&);
ll n,k,c=1,i,x=2;

int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++){
        if((k-c)%x==0)break;
        c*=2,x*=2;
    }
    cout<<i;
    return 0;
}
