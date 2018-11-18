// avvinci -  Winters (12/17)  
// #include"prettyprint.hpp"
#include<bits/stdc++.h>
using namespace std;

typedef pair<long long int , long long int> P;

#define mod 1000000007 
#define pb push_back
#define mk make_pair
#define fs first
#define sc second
#define ll long long int
#define fr(it,st,en) for(it=st;it<en;it++)
#define all(container) container.begin(),container.end()
#define INP ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ws(x) cout << #x << " = " << x << endl
#define N 100004

const long long infl = 1e18+5;

ll n,m,k,q,x,y,f,val,t=1,i,j;
ll ind = -1,cnt,sz,sm,ans,mx = -1,mn = infl ;
ll a[N][5] , b[5] ;

int check_pair(int x ,int y ){
    for(int i = 0; i < n ; i++ ){
        if(a[i][x] == 0 && a[i][y] == 0 ) return 1 ;
    }
    return 0 ; 
}

int check_pairs(){
    int x1 = check_pair(0,1) ; 
    int x2 = check_pair(0,2) ; 
    int x3 = check_pair(0,3) ; 
    int x4 = check_pair(1,2) ;
    int x5 = check_pair(1,3) ;
    int x6 = check_pair(2,3) ;

    if(x1 && x6 ) return 1 ; 
    if(x2 && x5 ) return 1 ;
    if(x3 && x4 ) return 1 ;
    return 0 ;
}

int main(){
INP
if (fopen("inp.txt", "r")) {
    freopen("myfile.txt","w",stdout);
    freopen("inp.txt", "r", stdin);
}


cin>>n>>k ;
int two_zero = 0 ,three_zero = 0;  
fr(i,0,n){
    cnt = 0 ;  
    fr(j,0,k){
        cin>>a[i][j] ; 
        if(a[i][j] == 0 ) b[j] =1 ; 
        cnt += 1 - a[i][j] ; 
    }
    if(cnt == 3)    three_zero = 1 ; 

}
f = check_pairs()  ;  
if(three_zero && b[0] && b[1] && b[2] && b[3] ) f = 1;
if(f) cout<<"YES" ; 
else cout<<"NO" ; 


return 0 ;
}