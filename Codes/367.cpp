#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define f first
#define s second

using namespace std;

long long i,j,k,n,v[500010], m,a,b,x,y,h,w,l,p,ans,numitor,aux,mini, sum, poz, val[600010], arbint[600010], t, z,d,q;
string s1,s2,s;
const long long int offset = 200001;
char c[1000010];
long double dAns, distmin, distmax;
long long matrix[25][25];
vector< int > G[500010];
vector< int > redE[200010];
queue < int > Q;
stack < int > stk;
map< long long , long long > mip[25][25];
set < int > sit;

int isOk( int x ){
    int cifre = 0;
    while( x ){
        cifre += x % 10;
        x /= 10;
        if( cifre > 10 )
            return 0;
    }
    if( cifre == 10 )
        return 1;
    return 0;
}

int main()
{
    #ifndef ONLINE_JUDGE
        ifstream cin(".in");
    #endif
        ios_base::sync_with_stdio(false);
    cin.tie( 0 );
    cin >> n;
    for( int i = 1 ; i <= 20000000 ; i++ ){
        if( isOk( i ) )
            ans++;
        if( ans == n ){
            cout << i;
            return 0;
        }
    }


return 0;
}
