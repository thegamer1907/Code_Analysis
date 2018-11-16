#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

#define int long long
#define ld long double
#define IOS ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;

#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define vi vector<ll>
#define vp vector<pii >
#define vs vector<string>
#define all(v) v.begin(),v.end()

#define FOR(i,a,b) for(ll i=a;i<b;++i)
#define ROF(i,a,b) for(ll i=a;i>=b;--i)

#define inft (1LL<<61)
#define inf 1000000000
#define pi 3.14159265358979323846//20 decimals
#define MOD 1000000007
#define print_time {cout << flush; cerr << endl << "Time taken: " << fixed << setprecision(3) << 1.0 * clock() / CLOCKS_PER_SEC << " secs\n";}

int read(){
	int x = 0 , f = 1 ; char ch = getchar();
	while(ch < '0' || ch > '9'){if(ch == '-') f = -1 ; ch = getchar();}
	while(ch >= '0' && ch <= '9'){x = x * 10 + ch - '0' ; ch = getchar();}
	return x * f;
}

int gcd(int a,int b){
    if(!a)return b;
    return gcd(b%a,a);
}

int f(int x){
    if(x==1) return -1 ;
    if(x==0) return 1 ;
}

int32_t main(){
/*
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
*/
    IOS ;
    int n ; cin >> n ; int a[n+1] ; int c=0 ;int mx=0 ;
    for(int i=1 ; i<=n ; i++){cin >> a[i]; if(a[i]==1)c++ ;}
    
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            int cnt=c;
            for(int x=i;x<=j;x++)cnt+=f(a[x]) ;
            mx=max(mx,cnt) ;
        }
    }
    if(mx==c)cout << mx-1 << endl ;
    else
        cout << mx << endl ;
return 0;
}