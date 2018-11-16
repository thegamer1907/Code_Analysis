#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
ll n,x,ans;
string s1,s2;

void solve()
{

    cin>>n;
    vector  < pair < ll , ll > > v,t;
    ll mini = 1e18 ;
    for(int i=1;i<=9;i++)
    {
        cin>>x;
        v.push_back({x,i});
        mini = min(x,mini);
    }
    ll ans  = n/mini ;
    if(!ans)
    {
    cout<<-1;
    return ;

    }




    while(ans--)
    {

        int i = 8 ;
        while(i>=0)
        {

        if((n-v[i].first)/mini == ans && n>=v[i].first)
            {
                cout<<v[i].second;
                n-=v[i].first;
                break ;


            }
        i--;

        }



    }



}


int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0); cout.tie(0);
    //freopen("test.in","r",stdin);
   solve();
    return 0;
}
