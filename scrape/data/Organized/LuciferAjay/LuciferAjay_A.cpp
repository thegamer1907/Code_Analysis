#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
int main()
{
    IOS
    ull n,m,k;
    cin>>n>>m>>k;
    vector<ull> v;
    ull a;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        a--;
        v.push_back(a);
    }
    ull l=k;
    ull ans=1,idx=0,x=0;
    ull val=(v[0]-x)/k;
    while(idx<m)
    {
        while(idx<m && (v[idx]-x)/k==val)
            idx++;
        if(idx==m)
            break;
        x=idx;
        ans++;
        val=(v[idx]-x)/k;
    }
    cout<<ans<<endl;
    return(0);
}