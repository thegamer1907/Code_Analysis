#include <bits/stdc++.h>
#define MP make_pair
#define PB emplace_back
#define fi first
#define se second
#define ZERO(x) memset((x), 0, sizeof(x))
#define ALL(x) (x).begin(),(x).end()
#define rep(i, a, b) for (repType i = (a); i <= (b); ++i)
#define per(i, a, b) for (repType i = (a); i >= (b); --i)
#define QUICKIO                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;
using ll=long long;
using repType=int;

int main()
{
	string a; cin>>a; int len=a.length();
	if(len<4) cout<<"NO"<<endl;
	else
	{
		vector<int> ab,ba;
		rep(i,0,len-2) 
		{
			if(a[i]=='A' && a[i+1]=='B') ab.PB(i);
			else if(a[i]=='B' && a[i+1]=='A') ba.PB(i);
		}
		bool ok=false;
		rep(i,0,int(ab.size())-1)
		{
			per(j,int(ba.size())-1,0)
			{
				if(ab[i]+1<len && ab[i]+1!=ba[j] && (ba[j]+1>len-1 || ba[j]+1!=ab[i])) { ok=true; break; } 
			}
			if(ok) break;
		}
		if(ok) cout<<"YES"<<endl; else cout<<"NO"<<endl;
	}
	return 0;
}
