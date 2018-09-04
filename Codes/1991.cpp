/**
!------------------------------------------------------------------------------
! ~ username    :   codephile
!------------------------------------------------------------------------------
! ~ problems    :   C. Geometric Progression
! ~ description :
!------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define x first
#define y second
#define sz(a) int((a).size())
#define len(a) int((a).length())
#define all(c) (c).begin(),(c).end()

#define For(i,a,b) for(int i=int(a);i<=int(b);++i)
#define Forv(a,i) for(int i=0;i<sz(a);i++)
#define FOR(c, it) for(typeof(c.begin()) it=c.begin();it!=c.end();++it)

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef map<int,int> mii;
typedef long long int ll;

#define MOD 1000000007
#define inf 1000000000
#define linf (ll)1e18
#define N 200005

ll n,k;
ll a[N];
map<ll,int> m1,m2;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
    #endif

    cin >> n >> k;
    For(i,1,n) cin >> a[i];


    ll ans=0;
    for(int i=n;i>=1;i--) m2[a[i]]++;
    m1[a[1]]++;
    m2[a[1]]--;
    For(i,2,n-1){
        m2[a[i]]--;
        if(a[i]%k==0){
            ll b=a[i]/k;
            int cnt1 = m1[b];
            int cnt2 = m2[b*k*k];

            //cout << b << " " << cnt1 << " " << cnt2 << endl;
            ans+=cnt1*1LL*cnt2;
        }
        m1[a[i]]++;
    }
    cout << ans << endl;











    return 0;
}