#include<bits/stdc++.h>
#define y1 agfjk

using namespace std;

const int N=205,
        INF=1e9+7;

int n;

string s;
string t[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>s;
    cin>>n;
    for (int i=1; i<=n; ++i){
        cin>>t[i];
        if (t[i]==s) return cout<<"YES",0;
    }
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=n; ++j){
            if (t[i][1]==s[0]&&t[j][0]==s[1]) return cout<<"YES",0;
        }
    }
    cout<<"NO";
}
