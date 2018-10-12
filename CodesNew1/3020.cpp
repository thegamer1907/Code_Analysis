/*
* Author: Aayush Tyagi
* Created: 01-10-2018 23:58:20
* Language: C++
*/
#include<iostream>
#include<climits>
#include<numeric>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iterator>
#include<utility>
#include<array>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<list>
#include<forward_list>
#include<set>
#include<unordered_set>
#include<map>
//#include<unordered_map>
#include<tr1/unordered_map>
using namespace std;
using namespace std::tr1;
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vlli vector<long long int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define vs vector<string>
#define in1(x) int x; x = scan();
#define in2(x,y) int x, y; x = scan(), y = scan();
#define in3(x,y,z) int x, y, z; x = scan(), y = scan(), z = scan();
#define lin1(x) ll int x; x = scan();
#define lin2(x,y) ll int x, y; x = scan(), y = scan();
#define lin3(x,y,z) ll int x, y, z; x = scan(), y = scan(), z = scan();
#define pb(x) push_back(x)
#define makep(x,y) make_pair(x,y)
#define mx(a,b) (a)>(b)?(a):(b)
#define mn(a,b) (a)<(b)?(a):(b)
#define rep(i,s,e) for(int i=s;i<=e;i++)
#define brep(i,s,e) for(int i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define bit_count(x) __builtin_popcount(x)
#define pi 3.14159265358979323846264338327950
#define MOD7 1000000007
#define MOD9 1000000009
#define fast std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
ll int gcd(ll int a, ll int b)
{
    if( a==0 ) return b;
    return gcd( b%a, a );
}
ll int fast_power(ll int base, ll int power, ll int mod)
{
    ll int result = 1;
    while(power > 0)
    {
        if(power & 1) result = (result*base) % mod;
        base = (base * base) % mod;
        power >>= 1;
    }
    return result;
}
ll int scan()
{
    ll int t=0;
    char c,ch;
    ch=getchar();
    if(ch=='-') c=getchar();
    else c=ch;
    while(c<'0' || c>'9')
      c=getchar();
    while(c>='0' && c<='9')
    {
        t=(t<<3)+(t<<1)+c-'0';
        c=getchar();
    }
    if (ch=='-' ) return -t;
    else return t;
}
int main()
{
    //fast;
    lin1(k)
    string bin;
    cin>>bin;
    ll int n = bin.length();
    vector<ll int> index;
    index.pb(0);
    rep(i,0,n-1) if( bin[i]=='1' ) index.pb(i+1);
    index.pb(n+1);
    ll int sum = 0;
    if( k!=0 )
    {
        rep(i,1,index.size()-2)
        {
            if( i+k>=index.size() ) sum += 0;
            else
                sum += (index[i+k]-index[i+k-1])*(index[i]-index[i-1]);
        }
    }
    else
    {
        vector<ll int> index2;
        index2.pb(0);
        rep(i,0,n-1) if( bin[i]=='1' ) index2.pb(i+1);
        index2.pb(n+1);
        //rep(i,0,index2.size()-1) cout<<index2[i]<<" ";
        //cout<<endl;

        rep(i,1,index2.size()-1)
        {
            sum += ((index2[i]-index2[i-1])*(index2[i]-index2[i-1]-1))/2;
        }
    }
    cout<<sum<<"\n";
}