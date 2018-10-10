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

const int N=1e7+1;
const int M=1e7+15;

int used[M];
vector<bool>p(M,true);
int pref[M];

main ()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for (int i=1;i<=n;++i){
        int x;
        cin>>x;
        used[x]++;
    }
    p[0]=false;
    p[1]=false;
    for (int i=2;i<=N-1;++i){
        if (p[i]){
            for (int j=i;j<=N-1;j+=i){
                pref[i]+=used[j];
                p[j]=false;
            }
        }
    }
    for (int i=2;i<=N-1;++i){
        pref[i]+=pref[i-1];
    }
    int m;
    cin>>m;
    for (int i=1;i<=m;++i){
        int l,r;
        cin>>l>>r;
        l=min(l,N-1);
        r=min(r,N-1);
        cout<<pref[r]-pref[l-1]<<endl;
    }
}
