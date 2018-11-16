
/////// -----* Harsh_hp *-------///////

#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

#define int long long
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
typedef long double ld ;
#define rep(i,l,r) for(int i=(l);i<(r);++i)
#define fr(i,a,b) for (int i = a; i <= b; i++)
#define vi vector<int>
#define pb push_back
#define all(v) v.begin(),v.end()

int a[101010] ;
int n,t ;

int32_t main () {

    IOS ;
    cin >> n >> t ;
    rep(i,1,n)cin >> a[i] ;
    int x=1 ;
    while(x<t)x+=a[x] ;
    if(x==t){
        cout << "YES" << endl ;
    }
    else{
        cout << "NO" << endl ;
    }

return 0 ;
}



