#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int main ()
{
    int n,d,a; cin>>n>>d; vector<int>v;n--;d--;
    while(n--) cin>>a,v.pb(a);

    int i = 0;

    while(i<d){i+=v[i];}

    if(i==d) cout<<"YES";
    else cout<<"NO";
}
