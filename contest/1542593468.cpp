#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#include<bitset>
// #include < unordered_map > 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// #include "boost/algorithm/string.hpp"
#define fio ios_base::sync_with_stdio(false)
#define mod 1000000007
#define mod1 mod
#define mod2 100000009
#define li long long int
#define ll li
#define readi(x) scanf("%d",&x)
#define  reads(x)  scanf("%s", x)
#define readl(x) scanf("%I64d",&x)
#define rep(i,n) for(i=0;i<n;i++)
#define revp(i,n) for(i=(n-1);i>=0;i--)
#define myrep1(i,a,b) for(i=a;i<=b;i++)
#define myrep2(i,a,b) for(i=b;i>=a;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define MAXN 1000000000000000000
#define MINN -1000000000000000000
#define pii pair<ll,ll> 
#define pdd pair<double,double>
#define pic pair<int,char>
#define N 800100
#define lgn 20
#define ddouble long double
#define minus minu
#define PI 3.1415926535
#define lgn 20


// #define INTMAX 200000000

// using namespace boost;
// #define si short int

using namespace std;
using namespace __gnu_pbds;             
// typedef priority_queue<ll, vector<ll> > max_pq;
// typedef priority_queue<pii, vector<pii> , greater<pii >  > min_pq;
ll toint(const string &s) {stringstream ss; ss << s; ll x; ss >> x; return x;}
string tostring ( ll number ){stringstream ss; ss<< number; return ss.str();}

// typedef priority_queue<pair < ll , pair < pii , ll > >  , vector<pair < ll , pair < pii , ll > >  > ,greater<pair < ll , pair < pii , ll > >  > > min_pq;

typedef tree< ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > OST;
typedef priority_queue< ll , vector<ll> > max_pq;
typedef priority_queue<pii, vector<pii> , greater <pii>  > min_pq;

ll st[30], en[30];
ll t;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE            
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);       
    #endif
    string s;
    cin >> s;

    cin >> t;
    bool flag = 0;
    while ( t-- )
    {
        string c;
        cin >> c;
        if ( c == s )
            flag = 1;
        st[c[0]-'a']++;
        en[c[1]-'a']++;
    }
    if ( (en[s[0]-'a'] and st[s[1]-'a']) )
        flag = 1;
    if ( flag )
        cout<<"YES";
    else
        cout <<"NO";






}                                       