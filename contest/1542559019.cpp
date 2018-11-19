#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    vector<int> bef[26];
    vector<string> v;
    int n,i,a1,a2,f=0,j;
    string s,pwd;
    cin>>pwd;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        v.pb(s);
        char c1=s[0],c2=s[1];
        a1=c1-'a',a2=c2-'a';
        bef[a1].pb(a2);
        bef[a2].pb(a1);
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        a1=v[j][0]-'a',a2=v[i][1]-'a';
        if(i!=j)bef[a1].pb(a2);
    }
    a1=pwd[0]-'a',a2=pwd[1]-'a';
    for(i=0;i<bef[a2].size();i++)
    if(bef[a2][i]==a1){f=1; break;}
    if(f)cout<<"YES";
    else cout<<"NO";
}
