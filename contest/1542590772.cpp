#include <bits/stdc++.h>
#define rep(i,l,r) for(int i=l;i<r;i++)
#define put(x) cout<<#x<<" = "<<x<<endl;
#define X first
#define Y second
#define push push_back
#define pop pop_back
#define make make_pair
using namespace std;
typedef long long num;
typedef pair<int,int> point;
const int maxn=110;

int n,k;
string t,s[maxn];
bool ans,a,b;
int main()
{
    string t;
    cin>>t>>n;
    rep(i,0,n)
	{
	    cin>>s[i];
	    if(s[i]==t)
		{
		    ans=1;
		}
	    if(s[i][0]==t[1])
		{
		    a=1;
		}
	    if(s[i][1]==t[0])
		{
		    b=1;
		}
	    ans|=a&&b;
	}
    if(ans)
	{
	    cout<<"YES\n";
	}
    else
	{
	    cout<<"NO\n";
	}
}
