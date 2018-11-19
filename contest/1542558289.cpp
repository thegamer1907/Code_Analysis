
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define MX 1000069
const ll mod = 1e9+7;
using namespace std;

int n,k;
vector <int> v[33];
int main()
{
    cin>>n>>k;
    for ( int i=1 ; i<=n ; i++ )
    {
        int mask=0;
        for ( int j=0 ; j<k ; j++ )
        {
            int x;
            scanf ( "%d" , &x );
            if ( x )
            mask |= (1<<j);
        }
        v[mask].push_back( i );
    }
    if ( !v[0].empty() ) { puts("YES"); return 0; }
    for ( int i=1 ; i<16 ; i++ )
    {
        int msk=i;
        if ( v[msk].empty() ) { continue; }
        int c=0;
        for ( int j=1 ; j<16 ; j++ )
        {
            int nmsk = j;
            if ( (i==j) || ( nmsk&msk ) ) { continue; }
            //cout<<msk<<" "<<nmsk<<endl;
            c += v[nmsk].size();
        }
        if ( c>=v[msk].size() ) { puts("YES"); return 0; }
    }

    puts("NO");



    return 0;
}
