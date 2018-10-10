#include <bits/stdc++.h>
#define loop(n) for(ll  i= 0 ; i< (n) ; i++)
#define ll long long
#define vi vector<double>
#define ii pair<ll,ll>
#define inf 10000000
#define MAXNODE 250009
#define all(x) x.begin(),x.end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define OO LONG_MAX
#define md 1000000009
#define LCM(a,b) (a)*(b) / ( __gcd( a , b) )

using namespace std;


int main(){


   // cout << __gcd(48 , 72) ;
    // freopen("small.in" , "r" , stdin) ;
    // freopen("1.txt" , "w" , stdout) ;


   // cin.tie(0);
   // cin.sync_with_stdio(0);

    string s; cin >> s;

    ll nB , nS , nC ; cin >> nB >> nS >> nC ;

    ll pB , pS , pC ; cin >> pB >> pS >> pC ;

    ll B=0 , S= 0 , C=0 ;

    ll r ; cin >> r ;

    loop(s.length()){
        B+= (s[i]=='B') ;
        S+= (s[i]=='S') ;
        C+= (s[i]=='C') ;
    }

    ll hi= 0  ;

    if(B)hi = max(hi , (r/(pB)+nB)/B ) ;

    if(S)hi = max(hi , (r/(pS)+nS)/S ) ;

    if(C)hi = max(hi , (r/(pC)+nC)/C ) ;

    ll lo = 0 ;

    ll ans = 0 ;

   // cout << lo << " " << hi << '\n' ;
    hi = 100000000000000 ;
    //cout <<"sdfsd" ;
    while(lo<hi){

        ll mid = lo + (hi-lo)/2 ;

        ll R= r ;

        if(B && B*mid>nB )R-= (mid*B-nB)*pB ;
        if(S && S*mid>nS )R-= (mid*S-nS)*pS ;
        if(C && C*mid>nC )R-= (mid*C-nC)*pC ;

        if(R<0){
            hi = mid ;
        }
        else{
            ans = mid;
            lo = mid+1 ;
        }

    }
    cout << ans ;

    return 0;
}
