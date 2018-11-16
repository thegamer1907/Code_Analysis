/**mital21**/

#include<bits/stdc++.h>
#define ll          long long int
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;

#define N  100005

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTS=1;
//    cin>>TESTS;
    while(TESTS--)
    {
        ll n,m,a[100005],b[100005],x,i;
        cin>>n>>m;
        std::map<ll,ll> lol;
        for(i=0;i<n;i++)
            {
                cin>>a[i];
                lol[a[i]]++;
            }
        for(i=0;i<n;i++)
        {
            b[i]=lol.size();
            lol[a[i]]--;
            if(lol[a[i]]==0)
                lol.erase(a[i]);
        }
        for(i=0;i<m;i++)
        {
            cin>>x;
            cout<<b[x-1]<<endl;
        }

    }
    return 0;
}