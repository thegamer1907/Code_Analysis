#include <bits/stdc++.h>
#define For(i,n) for(int i =0;i<n;i++)
#define vl vector<long long>
#define pll pair<long long,long long>
#define debug(a) cerr<<#a<<": "<<a<<endl;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define NIL -1
typedef long long ll;
using namespace std;


int main()
{
#ifdef FFFeelipe
    freopen("/home/fffeelipe/Contests/in.txt" ,"r",stdin);
    freopen("/home/fffeelipe/Contests/out.txt","w",stdout);
#endif
    fastIO;
    int n,k;
    cin>>n>>k;
    n++;
    int a[n];
    a[0]=0;
    for(int i = 1; i<n;i++)
        a[i] = 5*i + a[i-1];
    cout<<upper_bound(a,a+n,240-k)-a-1;
    return 0;
}
