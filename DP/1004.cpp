/*
* Author: Aayush Tyagi
* Created: 11-10-2018 02:47:38
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
//ld PI = M_PI;
 
#define pb push_back
#define mp make_pair
#define rep(i,s,e) for(int i=s;i<=e;i++)
#define brep(i,s,e) for(int i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define ones __builtin_popcount
#define fast std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int main()
{
    //fast;
    ll n;
    cin>>n;
    ll a[n], one[n], zero[n], on = 0, zr = 0;
    memset(one,0,sizeof(one));
    memset(zero,0,sizeof(zero));
    rep(i,0,n-1)
    {
        cin>>a[i];
        if( a[i]==0 ) zr++; 
        if( a[i]==1 ) on++;
        zero[i] = zr, one[i] = on;
    }
    ll max = 0;
    rep(i,0,n-1)
    {
        rep(j,i,n-1)
        {
            ll nzr, non;
            if( i!=0 )
            {
                nzr = zero[j]-zero[i-1];
                non = one[j]-one[i-1];
            }
            else nzr = zero[j], non = one[j];
            ll count = nzr+on-non;
            if( count>max ) max = count;
        }
    }
    cout<<max<<"\n";
}