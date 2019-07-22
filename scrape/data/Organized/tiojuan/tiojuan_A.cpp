#include <vector>
#include <bits/stdc++.h>
#define MAX 10e9+1
#define MIN 0
#define FOR(i, a, b)    for(int i=a;i<b;i++)
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<ll,ll> pll;
typedef pair<double,double> ii;
vector<ii> vsabor;
vll vl;
ll T;

int main()
{

    ll N;
    cin>>N;
    ll m;
    cin>>m;
    vl.resize(m);
    ll org,k;
    cin>>org;
  
    k=org;
    FOR(i,0,m)
    {
        cin>>vl[i];
    }
    ll op=0;

    ll pos=-1;
    ll ant=-1;
    while(pos<m-1)
    {
        ll inc=(ant+m+2)/2; 
        while(inc!=0)
        {
            if(pos+inc<m&&vl[pos+inc]<=k) pos+=inc;
            else inc/=2;
        }
        if(pos==ant) {  ll mientras=(vl[pos+1]-k)/org;
                        if (mientras>0) k+=(mientras*org);
                        else k+=org;
        }           
        else {k+=(pos-ant); op++; ant=pos;}

    }
    cout<<op;
}