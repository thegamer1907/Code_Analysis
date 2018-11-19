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
const int maxn=1e5+10;

int n,k;
bool mark[16];

int main()
{
    cin>>n>>k;
    rep(i,0,n)
	{
	    int e=0;
	    bool a[4];
	    for(int j=k-1;j>=0;j--)
		{
		    cin>>a[j];
		    e+=a[j]*(1<<j);
		}
	    mark[e]=1;
	    rep(j,0,16)
		{
		    if((e&j)==0 && mark[j])
			{
			    cout<<"YES\n";
			    return 0;
			}
		}
	}
    cout<<"NO\n";
}
