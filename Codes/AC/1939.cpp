#include<bits/stdc++.h>
#define ff first
#define ss second
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define all(a) a.begin(),a.end()
#define int long long
using namespace std;

const int N=1e6+7;

map<int,int>pref;
map<int,int>suf;

int a[N];

main ()
{
    int n;
    int k;
    cin>>n>>k;
    for (int i=1;i<=n;++i)cin>>a[i];
    for (int i=1;i<=n;++i){
        suf[a[i]]++;
    }
    int ans=0;
    for (int i=1;i<=n;++i){
        suf[a[i]]--;
        if (a[i]%k==0){
            ans+=pref[a[i]/k]*suf[a[i]*k];
        }
        pref[a[i]]++;
    }
    cout<<ans<<endl;
}
