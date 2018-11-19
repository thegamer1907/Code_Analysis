#include<bits/stdc++.h>
using namespace std;

pair<bool,bool> used[1001];

int main ()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    string p=s;
    reverse(p.begin(),p.end());
    for (int i=1;i<=n;++i){
        string j;
        cin>>j;
        used[j[0]].first=true;
        used[j[1]].second=true;
        if (j==s || j==p){cout<<"YES";exit(0);}
    }

    if (used[s[0]].second && used[s[1]].first)cout<<"YES";
    else cout<<"NO";
}
