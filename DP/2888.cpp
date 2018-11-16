#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fo(i,a,b) for(int i=a;i<b;i++)
#define fo_(i,a,b) for(int i=a;i>b;i--)
#define M(a) memset(a,0,sizeof a)
#define M_(a) memset(a ,-1,sizeof a)
#define pb push_back
#define PI 3.14159265
#define nmax 100100
const ll inf = std::numeric_limits<ll>::max();
const ll mod = 1e9+7;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int a[nmax],b[nmax];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,k;
    cin >> n >> k;
    fo(i,0,n) cin >> a[i];
    fo(i,0,k) cin >> b[i];
    sort(b,b+n,greater<int>());
    int j = 0;
    fo(i,0,n){
        if(a[i] == 0){
            a[i] = b[j++];
        }
    }
    fo(i,1,n){
        if(a[i-1] > a[i]) return cout << "Yes",0;
    }
    cout << "No";
    return 0;
}

