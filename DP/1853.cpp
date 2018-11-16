#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define sz(a) (ll)((a).size())
#define MOD 1000000007

typedef struct cord{
	ll x,y;
}cord;
 
int main()
{
	string str;cin>>str;vector<cord>ab,ba;cord temp;
	for (ll i = 0; i < sz(str); ++i)
	{
		if(str[i]=='A'&&str[i+1]=='B'){temp.x=i;temp.y=i+1;
			ab.pb(temp);
		}
		if(str[i]=='B'&&str[i+1]=='A'){temp.x=i;temp.y=i+1;
			ba.pb(temp);
		}
	}

	

	ll flag=0;

	for (int i = 0; i < sz(ab); ++i)
	{
		for (int j = 0; j < sz(ba); ++j)
		{
			if(ab[i].x!=ba[j].y&&ab[i].y!=ba[j].x&&ab[i].x!=ba[j].x)
			{
				flag=1;break;
			}
		}
	}
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
} 