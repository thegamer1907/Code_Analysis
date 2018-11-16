#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define INF INT_MAX/10
typedef long long ll;
typedef pair<ll,ll> PII;
typedef long long ll;

bool visited[1007];

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for ( ll i = 0 ; i < n ; i++ ) cin >> a[i];
    
    
    ll se=0, s = 0, e = k;      //denotes starting of cur and e is ending(not included)
    ll d = 0, md = INT_MAX;
    
    for (ll i = 0 ; i < k ; i++)
        d += a[i];
    
    if ( d < md ){   md = d;    se = s;  }
    
    while( e < n && s < n ){
        
        d -= a[s];
        s++;
        
        d += a[e];
        e++;
        
        if ( d < md ){
            se = s;
            md = d;
        }
        //cout << d << " " << s << " " << e << endl;
        
    }
    
    //cout << md << endl;
    cout << se+1 << endl;
    
    return 0;
    
}

