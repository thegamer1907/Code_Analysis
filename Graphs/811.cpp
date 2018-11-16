#include <bits/stdc++.h>
#define fios ios::sync_with_stdio(false),cin.tie(false),cout.tie(false);
#define  sc1(a )  cin>>a
#define  sc2(a,b,type) type a,b,cin>>a>>b
#define  sc3(a, b, c,type) type a,b,c; cin>>a>>b>>c;
#define  sc4(a, b, c, d,type) type a ,b,c,d; cin>>a>>b>>c>>d;
#define nl    cout<<"\n";
#define PI 3.14159265
#define MAXN 1000005
#define ll long long

typedef unsigned long long ull;
int dp[500005][25];

using namespace std;
int main()
{   fios;
    ll n,t,i=0,j=0 ;
    string a ;
    while( cin >> n >> t >>  a )
    {
        for( i = 0; i < t; i++ )
            for(j = 0; j <n-1; j++)
                if(a[j] == 'B' and  a[j+1]=='G')
                            swap(a[j],a[j+1]),++j;
        cout << a << endl;
    }


    return 0;
}
