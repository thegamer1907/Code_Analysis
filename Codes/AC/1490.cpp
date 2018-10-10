#include <bits/stdc++.h>

#define loop(n) for(int  i= 0 ; i< (n) ; i++)
#define ll long long
#define vi vector<int>
#define inf 1000000009

using namespace std;

ll ans=0 ;

ll sol(vi &v , int i , int n , double p ){

    if(i==n)return 0 ;

    ll x = sol(v, i+1 , n , p ) ;
    ll y = sol(v, i+1 , n , p*v[i] ) ;

    double b= sqrt(p*v[i]) ;

    if(b==round(b)){
        return 1+x+y ;
    }
    else return x+y ;

}

int main()
{

    int n ,S ; cin >> n>>S ;

    vi v(n) ; loop(n)cin >> v[i] ;

    int k = n ;

    int lo  = 0  , hi = n+1 ;

    vector<long long > cost(n);

    ll SUM = 0 ;
    while(lo < hi){
        int mid = lo + (hi-lo)/2 ;

        ll sum = 0 ;

        loop(n)cost[i] = v[i] + (long)mid*(i+1) ;

        sort(cost.begin() , cost.end() ) ;

        for(int i = 0 ; i <mid ;i++){
            sum += cost[i];

        }
        //cout << mid <<"  "<<sum <<'\n' ;
        if(sum >S || sum<0){
            hi = mid ;
        }
        else{
            lo =mid+1 ;
            SUM= sum ;
        }
    }

    cout << lo-1 <<" "<<SUM ;


    return 0;
}
