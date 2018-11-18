#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
const int N=1000005;
 
ll n;
ll a,b;
ll mod1[N];
ll mod2[N];
ll v[N];
ll d[N];
ll l[N];
ll p[N];
ll arr[N];
#define ep 1e-6
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll sum[N];
string s1[100];
ll ab[N];
//string st[N];
//vector< int> v[N];
vector< pair <int,int> > v2;
#define mod %1000000007
ll min=2000000005;
int main()
{
    string s;
    cin>>s;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>s1[i];
    }
    if(n==1)
    {
        string p="";
        p=p+s1[0][1];
        p=p+s1[0][0];
        if(s==p || s==s1[0])
        cout<<"YES";
        else
        cout<<"NO";
        return 0;
    }
    
    ll flag=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
                if(s==s1[i])
                {
                    flag=1;
                    break;
                }
                string p="";
                p=p+s1[i][1];
                p=p+s1[j][0];
                //cout<<i<<" "<<j<<" "<<p;
                if(p==s)
                {
                    flag=1;
                    break;
            }
        }
        if(flag)
        break;
    }
    if(flag)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
    
}