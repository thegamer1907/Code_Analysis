// By piyushg1411, contest: Educational Codeforces Round 49 (Rated for Div. 2), problem: (D) Mouse Hunt, Accepted, #

#pragma GCC optimize("O3")
#include<bits/stdc++.h>

#define debug(x)        {cerr<<#x<<" = "<<x<<endl;}
#define mod             1e9+7
#define test()          long long  o;cin>>o;while(o--)
#define input(vec)      for(unsigned int c=0;c<vec.size();cin>>vec[c++])
#define output(vec,x)   for(unsigned int c=0;c<vec.size();x<<vec[c++]<<',');x<<endl;
#define sz(k)           k.size()
#define ln(s)           s.length()
#define pb              push_back
#define mp              make_pair
#define all(x)          x.begin(), x.end()
#define finc(i, x, y)   for (__typeof(x) i = x; i < y; i ++)
#define fdec(i, x, y)   for (__typeof(x) i = x; i > y; i --)
#define fincp(itr, x)   for (__typeof(x.begin()) itr = x.begin(); itr != x.end(); itr ++)
#define fdecp(itr, x)   for (__typeof(x.enC:\cygnus\cygwin-b20\H-i586-cygwin32\bind()) itr = x.end() - 1; itr != x.begin() - 1; itr --)
#define dragonforce()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cerr.tie(NULL);
#define PI              (acos(-1.0))
#define E               2.71828182845904523536
#define by(x)           [](const auto& a, const auto& b) { return a.x < b.x; }
#define F               first
#define S               second
#define mem(a,x)        memset(a,x,sizeof(a))
#define mnv(v)          *min_element(v.begin(),v.end())
#define mxv(v)          *max_element(v.begin(),v.end())
#define valid(tx,n)     (tx>=0&&tx<n)
// #define pr(x)           cout<<fixed<<setprecision(x);


using namespace std;
typedef pair<int, int>  pi;
typedef vector<int>     vi;
typedef long long       ll;
typedef unsigned long long  ull;
typedef vector<string>  vs;

auto geti=[](){int t;cin>>t;return t;};

struct bucket
{
    //data members
    int id,score;
    bucket()
    {
    	score=0;
    }
};

int myfun (int a,int b)
{
	// int k=1;
	// while(a&&b)
	// {
	// 	if(a&1&&b&1)
	// }
	return a&b;
}

int main()
{ 
	dragonforce();

	int n,x=0,y=0,z=0;
	cin>>n;
	int t;
	finc(c,0,n){
		x+=geti();
		y+=geti();
		z+=geti();

	}

	if(x==0&&y==0&&z==0)
		cout<<"YES";
	else cout<<"NO";
}

