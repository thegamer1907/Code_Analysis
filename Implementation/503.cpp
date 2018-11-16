#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define Clear(arr) memset(arr,0,sizeof arr)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())

int main()
{
    int n,k;
    cin >> n >> k;
    vector <int> v(n);
    rep(i,0,n)
        cin >> v[i];
    int ans = 0;
    rep(i,0,n){
        if (v[i] > 0 && v[i] >= v[k-1])
            ans++;
    }
    cout << ans << endl;
}
