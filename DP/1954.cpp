#define ll long long
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cmath>
#include<bitset>

using namespace std;

ll a[100001],backtrack[100002]={0};
set <int> st;

int main ()
{
//    freopen("a.in","r",stdin);
    ll n,m,c=0,p;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=n;i>=1;i--)
    {
        backtrack[i]+=backtrack[i+1];
        if(st.find(a[i]) == st.end())
        {
            backtrack[i]++;
            st.insert(a[i]);
        }
    }
    for(int i=1;i<=m;i++)
    {
        cin>>p;
        cout<<backtrack[p]<<endl;
    }
    return 0;
}
