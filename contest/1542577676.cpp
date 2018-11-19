#include <map>
#include <set>
#include <queue>
#include <vector>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#define R resize
#define ALL(x) (x).begin(),(x).end()
#define EB emplace_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int maxK = 12;

struct str
{
    string pocz;
    string kon;
    int val = 0;
    vector< vector< bool > > tab;
    str() 
    {
        for ( int i = 0; i <= maxK; ++i )
            tab.push_back( vector< bool >( 1 << i ) );
    }
};

int n;
vector< str > tab;

inline bool spr ( int ind, int val )
{
    if ( val > maxK )
        return false;
    for ( int i = 0; i < tab[ind].tab[val].size(); ++i )
        if ( tab[ind].tab[val][i] == false )
            return false;
    return true;
}

inline int binary ( string s )
{
    int res = 0;
    for ( int i = 0; i < s.size(); ++i )
    {
        res <<= 1;
        res |= ( s[i] - '0' );
    }
    return res;
}   

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    tab.resize( n + 1 );
    for ( int i = 1; i <= n; ++i )
    {
        string s; cin >> s;
        tab[i].pocz = s.substr( 0, maxK );
        tab[i].kon = s.substr( max( 0, (int)s.size() - maxK ) );
        for ( int dl = 1; dl <= maxK; ++dl )
            for ( int k = 0; k <= (int)s.size() - dl; ++k )
                tab[i].tab[dl][binary(s.substr(k,dl))] = true;   
        while ( spr( i, tab[i].val + 1 ) )
            ++tab[i].val;
    }
//    for ( int i = 1; i <= n; ++i )
//        cout << tab[i].val << ' ';
//    cout << '\n';
    int ile_op; cin >> ile_op;   
    while ( ile_op-- )
    {
        int l, p;
        cin >> l >> p;
        tab.push_back( str() );
        for ( int dl = 1; dl <= maxK; ++dl )
            for ( int k = 0; k < tab[l].tab[dl].size(); ++k )
                tab[tab.size()-1].tab[dl][k] = tab[l].tab[dl][k] or tab[p].tab[dl][k];
        tab[tab.size() - 1].val = max( tab[l].val, tab[p].val );
        string s = tab[l].kon + tab[p].pocz;
        string pocz = tab[l].pocz + tab[p].pocz;
        pocz = pocz.substr( 0, maxK );
        string kon = tab[l].kon + tab[p].kon;
        kon = kon.substr( max( 0, (int)kon.size() - maxK ) );
        tab[tab.size() - 1].pocz = pocz;
        tab[tab.size() - 1].kon = kon;
        for ( int dl = 1; dl <= maxK; ++dl )
            for ( int k = 0; k <= (int)s.size() - dl; ++k )
                tab[tab.size() - 1].tab[dl][binary(s.substr(k,dl))] = true;   
        while ( spr( tab.size() - 1, tab[tab.size() - 1].val + 1 ) )
            ++tab[tab.size() - 1].val;
  
        cout << tab[tab.size() - 1].val << '\n';
    }
}   