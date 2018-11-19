#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<r;i++)
#define put(x) cout<<#x<<" = "<<x<<endl;
#define X first
#define Y second
#define push push_back
#define pop pop_back
#define make make_pair
using namespace std;
typedef long double lod;
const int maxn=1e5+10;

lod h,m,s;
lod t1,t2;

bool is_in(lod a,lod b,lod h,lod m,lod s)
{
    if(b>a)
	{
	    if(h>a && h<b)
		{
		    return 0;
		}
	    if(m>a && m<b)
		{
		    return 0;
		}
	    if(s>a && s<b)
		{
		    return 0;
		}
	}
    if(a>b)
	{
	    if(h>a || h<b)
		{
		    return 0;
		}
	    if(m>a || m<b)
		{
		    return 0;
		}
	    if(s>a || s<b)
		{
		    return 0;
		}
	}
    return 1;
}

int main()
{
    cin>>h>>m>>s>>t1>>t2;
    m+=s/60;
    h+=m/60;
    m/=5;
    s/=5;
    if(is_in(t1,t2,h,m,s) || is_in(t2,t1,h,m,s))
	{
	    cout<<"YES\n";
	}
    else
	{
	    cout<<"NO\n";
	}
}
