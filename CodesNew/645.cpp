#include <bits/stdc++.h>

using namespace std;

int n,m;
unordered_set<string> poland;
unordered_set<string> enemy;
unordered_set<string> both;

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        poland.insert(s);
    }
    for(int i=1;i<=m;i++)
    {
        string s;
        cin>>s;
        enemy.insert(s);
    }
    int ps=poland.size(), es=enemy.size();
    if(ps>es)
    {
        cout<<"YES";
    }
    else if(es>ps)
    {
        cout<<"NO";
    }
    else
    {
        for(auto x:poland)
        {
            if(enemy.find(x)!=enemy.end())
            {
                both.insert(x);
            }
        }
        int bs=both.size();
        if(ps-bs>es-bs) cout<<"YES";
        else if(es-bs>ps-bs) cout<<"NO";
        else
        {
            if(bs%2) cout<<"YES";
            else cout<<"NO";
        }
    }
    return 0;
}
