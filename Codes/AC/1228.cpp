#include <bits/stdc++.h>
#define f first
#define s second
#define int long long

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    set<string>Q1;
    set<string>Q2;
    for (int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        Q1.insert(s);
    }
    for (int i=0;i<m;i++)
    {
        string s;
        cin>>s;
        Q2.insert(s);
    }
    int k=0;
    for (auto elem:Q1)
    {
        if (Q2.count(elem)==1)
            k++;
    }
    k=k%2;
    if (Q1.size()+k>Q2.size())
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
