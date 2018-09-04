#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define INF 2000000000
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define pb push_back
#define ii pair<int,int>
#define vii vector<ii>
#define si set<int>
#define msi map<string,int>
#define REP(i,a,b) for(int i=int(a);i<=int(b);i++)
#define TRvi(c,it) for(vi::iterator it=(c).begin();it!=(c).end();it++)
#define TRvii(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)
#define TRmsi(c,it) for(msi::iterator it=(c).begin();it!=(c).end();it++)

using namespace std;

int main()
{
    ll n,m,k;
    cin >> n >> m >> k;
    ll l=1,r=n*m+1;
    while(l<r)
    {
        ll x=(l+r)/2;
        ll count=0;
        REP(i,1,n)
            count+=min((x-1)/i,m);
        if(count<k)
            l=x+1;
        else
            r=x;
    }
    cout << l-1;
}