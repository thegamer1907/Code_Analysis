#include <bits/stdc++.h>
#define re return
#define ll long long
#define ull unsigned ll
#define ld long double
#define f first
#define s second
#define pi acos(-1)
#define oo (ll)1e9
#define OO (ll)1e18
#define EPS 1e-7
#define FX(n) fixed<<setprecision(n)
#define mm(o,k) memset(o,k,sizeof o)
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int maxn=100005;

int main()
{
    IO;
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];
    int l=0,r=n-1;
    ll cntL=0,cntR=0;
    ll Max=0;
    while(l<=r){
        if(cntR==cntL)Max=max(Max,cntR);
        if(cntR<=cntL)cntR+=a[r--];
        else cntL+=a[l++];
        if(cntR==cntL)Max=max(Max,cntR);
    }
    cout<<Max<<endl;
    re 0;
}