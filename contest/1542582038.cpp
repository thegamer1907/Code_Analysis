#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ENGZ ios_base::sync_with_stdio(0) ; ios::sync_with_stdio(0) ; cin.tie(0) , cout.tie(0) ;
#define sz(a) int(a.size())
#define f first
#define s second
#define pb push_back
#define endl "\n"
#define sf(a) scanf("%d", &a);
#define sf2(a,b) scanf("%d%d", &a ,&b );
#define sf3(a,b,c) scanf("%d%d%d", &a ,&b,&c );
#define sfll2(a,b) scanf("%I64d%I64d", &a ,&b );
#define sfll3(a,b,c) scanf("%I64d%I64d%I64d", &a ,&b,&c );
#define sfll(a) scanf("%I64d", &a);
#define print(a) printf("%d\n", a);
#define printarr(a) printf("%d ", a);
#define printll(a) printf("%I64d\n", a);
#define printll2(a,b) printf("%I64d %I64d\n", a,b);
#define pr(a) printf("%.9f\n", a);
#define PI 3.1415926653589793
//int a[]={1,1,1,0,0,-1,-1,-1} , b[]={1,0,-1,1,-1,1,0,-1} ;
using namespace std;


int main() {
        ENGZ ;
    string s , ss ;
    int n , f=0 , ff=0;
    char c , cc  ;

    cin>>ss >>n ;
    c=ss[0] , cc=ss[1] ;
    for(int i=0 ; i<n ; i++)
    {
        cin>>s ;
        if(s[0]==cc)
            f=1 ;
        if(s[1]==c)
            ff=1 ;
        if(s==ss)
            f=1 , ff=1 ;

    }
    if(f&&ff)
        cout<<"YES" <<endl ;
    else
        cout<<"NO" <<endl ;


	return 0;
}
