#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define D(x) cout<<#x<<" -> "<<x<<'\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define uni(x) (x).erase(unique(all(x)), (x).end())
#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define rep1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
const ld pi = 4.0*atanl(1.0);
const ll infll = (ll)(1e18) + 10;
const ll mod = powl(10, 9) + 7;

//removed '#define ll long long', keep in mind overflow
int main() {ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int &x : arr) cin >> x;
    if(k==0) {
        int longest = 0,i=0;
        while(i<n) {
            int temp = 0;
            while(i<n && arr[i]==1) {
                i++;
                temp++;
            }
            longest = max(longest, temp);
            i++;
        }
        cout << longest << '\n';
        for(int x : arr) cout << x << ' ';cout << '\n';
        return 0;
    }
    int l = 0, r = 0, zeros = (arr[0]==0);
    int longest = 0, longL = 0, longR = 0;
    while(r < n) {
        while(r < n && zeros <= k) {
            if(r-l+1 > longest) {
                longest = r-l+1;
                longL = l;
                longR = r;
            }
            r++;
            if(arr[r] == 0) zeros++;
        }
        if(arr[l]==0) zeros--;
        l++;
    }
    cout << longest << '\n';
    rep(i,n) {
        if(longL <= i && i <= longR) cout << 1 << ' ';
        else cout << arr[i] << ' ';
    }
    cout << '\n';
    return 0;
}

















