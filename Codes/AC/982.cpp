#include<bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define all(a) a.begin(),a.end()
#define endl '\n'
#define int long long
using namespace std;

const int N=1e5+1;

int pref[N][26];

int r=0,i;
int n,k;
string s;

int func(int pos)
{
    int k1=r-i+1-(pref[r][0]-pref[i-1][0]);
    k1=min(k1,r-i+1-(pref[r][1]-pref[i-1][1]));
    return k1;
}

main ()
{
    cin>>n>>k;
    cin>>s;
    for (i=0;i<s.size();++i){
        pref[i][s[i]-'a']++;
        for (int j=0;j<=25;++j){
            pref[i][j]+=pref[i-1][j];
        }
    }
    int ans=-1;
    for (i=0;i<s.size();++i){
        while (func(r)<=k && r<s.size())++r;
        --r;
        if (func(r)<=k)ans=max(ans,r-i+1);
    }
    cout<<ans<<endl;
}
