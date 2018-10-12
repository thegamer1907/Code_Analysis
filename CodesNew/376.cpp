#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()
#define fi first
#define se second
#define clr(v, d) memset(v, d, sizeof(v))

typedef pair<int, int> ii;
typedef vector<ii> vi;
typedef pair<int, pair<int, int> > iii;
typedef vector<iii> vii;
typedef long long ll;
typedef long double Double;
const int MOD = 1e9+7;
const int MAXN = 1e5+5;

int a[MAXN];

int main(){
    // freopen("input.in", "r", stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t, l, r, ans, i;
    cin>>n>>t;
    for(i=0;i<n;++i)
        cin>>a[i];

    ans = l = r = i = 0;

    while(l<n || r<n){
        while(i<t && r<n){
            i += a[r];
            ++r;
        }
        if(i>t)
            ans = max(ans, r-l-1);
        else
            ans = max(ans, r-l);
        i -= a[l];
        ++l;
    }

    cout<<ans<<endl;

    return 0;
}

//RT => 
//TT => 
//CT => 
//DT =>