#include<bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define ITER(it, x) for(auto it = x.begin(); it!=x.end(); it++)
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define nl "\n"
#define arrin(arr, n) for(int i=0; i<n; i++) cin>>arr[i]
#define arrout(arr, n) for(int i=0; i<n; i++) cout<<arr[i]<<" "; cout<<"\n"
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD 1000000007
#define max3(a,b,c) max(max(a,b), c)
#define min3(a,b,c) min(min(a,b), c)
#define init(arr, n, val) FOR(i,0,n) arr[i] = val
#define init2(arr, r, c, val) FOR(i,0,r) FOR(j,0,c) arr[i][j] = val
#define printv(v) ITER(it, v) cout<<*it<<" "; cout<<nl;
#define printa(a,n) FOR(i, 0, n) cout<<a[i]<<" "; cout<<nl;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    arrin(arr, n);
    sort(arr, arr+n);

    int l=0, r=n/2;

    int ans = 0;

    // printa(arr, n);

    while(l<n/2 && r<n)
    {
        while(r<n && arr[r]<2*arr[l])
            r++;

        if(r<n)
        {
            ans++;
            r++;
            l++;
        }
    }

    cout<<n-ans<<nl;
}