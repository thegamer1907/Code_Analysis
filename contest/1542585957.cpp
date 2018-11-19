#define prob GameOfSegments
 

#include <bits/stdc++.h>

using namespace std;
#define rep(i, l, r) for (int i = l; i<r;i++)
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define pb(c) push_back(c)
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define ii pair<int,int>
#define mp(i, j) make_pair(i,j)
#define ull unsigned long long int
#define ll  long long int
#define PI  3.141592653589793238
#define MOD (1000000007)
#define INF (2000000007)
#define EPS 0.0000000001
#define MAXN (105000+1)



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
#ifdef DEBUG
    freopen("input", "r", stdin);//use flush(cout)
#endif
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    t1 = (t1*5)%60,t2 = (t2*5)%60;
    h =  (((h*5)%60)*60*60+m*60+s)%(60*60*60);
    m = (m*60*60 + s*60)%(60*60*60);
     s=  (s*60*60  )%(60*60*60);
   t1 =  (t1*60*60  )%(60*60*60);
    t2 = (t2*60*60  )%(60*60*60);

        vi a =  {h,m,s,t1,t2} ;
        sort(all(a));
        rep (i,0,5) if ((a[(i)]==t1 && a[(i+1)%5]==t2) ||(a[(i+1)%5]==t1 && a[(i )%5]==t2)) {
                cout<<"YES";
                return 0;
            }

    cout<<"NO";
    return 0;
}