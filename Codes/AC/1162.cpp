#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;
const int INF=(int)1e9+10;
const int MOD=(int)1e9+7;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,dups=0;
    cin>>n>>m;
    set<string> s;
    for(int i=0;i<n+m;i++)
    {
        string tmp;
        cin>>tmp;
        if(s.count(tmp))
            dups++;
        else
            s.insert(tmp);
    }
    if(dups%2)
    {
        if(n>=m)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
    {
        if(n>m)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}