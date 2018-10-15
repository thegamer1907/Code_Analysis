#include <bits/stdc++.h>
using namespace std;
#define fn(i,n) for(int i=0 ; i< int(n) ; i++)
#define cf(i,c,n) for(int i=int(c) ; i< int(n) ; i++)
#define df(i,n) for(int i=int(n) ; i>=0 ; i--)
typedef long long ll;
typedef long double ld;
typedef unsigned int uni;
typedef unsigned long long ul;
const int INF=1e9;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, mx=-1, d=0;
    cin>>n>>m;
    vector<int> a(n);
    fn(i, n){
        cin>>a[i];
        mx = max(mx, a[i]);
    }
    fn(i, n)d +=mx-a[i];
    if(d >= m)cout<<mx<<" ";
    else{
        int r=(m-d)/n;
        if(r*n!=(m-d))r++;
        cout<<mx+r<<" ";
    }
    cout<<mx+m;
    return 0;
}
