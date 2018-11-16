/*
* Author: Aayush Tyagi
* Created: 13-10-2018 10:08:26
* Language: C++
*/
#include<iostream>
#include<cmath>
#include<cstring>
#include<climits>
#include<algorithm>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<list>
#include<set>
#include<unordered_set>
#include<map>
//#include<unordered_map>
#include<tr1/unordered_map>

using namespace std;
using namespace std::tr1;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef vector<int> v32;
typedef vector<ll> v64;

ll MOD7 = 1e9+7;
ll MOD9 = 1e9+9;

#define pb push_back
#define mp make_pair
#define rep(i,s,e) for(int i=s;i<=e;i++)
#define brep(i,s,e) for(int i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define ones __builtin_popcount
#define fast std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    //fast;
    string a;
    cin>>a;
    if( a.length()==1 )
    {   cout<<"NO\n";   return 0;   }
    ll index = -1;
    bool haha = false;
    rep(i,0,a.length()-2)
    {
        if( a[i]=='A' && a[i+1]=='B' )
        {   index = i+1;    break;  }
    }
    if( index==-1 )
    {   cout<<"NO\n";   return 0;   }
    rep(i,index+1,a.length()-2)
    {
        if( a[i]=='B' && a[i+1]=='A' )
            haha = true;
    }
    index = -1;
    bool hehe = false;
    rep(i,0,a.length()-2)
    {
        if( a[i]=='B' && a[i+1]=='A' )
        {   index = i+1;    break;  }
    }
    if( index==-1 )
    {   cout<<"NO\n";   return 0;   }
    rep(i,index+1,a.length()-2)
    {
        if( a[i]=='A' && a[i+1]=='B' )
            hehe = true;
    }
    haha || hehe ? cout<<"YES\n" : cout<<"NO\n";
}