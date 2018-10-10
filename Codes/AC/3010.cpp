#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define pll std::pair<ll, ll> 
#define ppll std::pair<ll, pll>
#define vll std::vector<ll> 
#define vpll std::vector<pll> 
#define vppll std::vector<ppll> 
#define mll std::unordered_map<ll, ll> 
#define mpll std::unordered_map<pll, ll>
#define mppll std::unordered_map<ppll, ll>
#define sll std::set<ll>
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define len length()
#define sz size()
const ll mod = 1e9 + 7;
const ll modd = 998244353;
const ll INF = 0x7FFFFFFFFFFFFFFF>>1;

/*#################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
####################################################*/



int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	string s;
	cin>>s;
	ll n=s.length();
	ll lps[n];
	ll i=1,j=0;
	lps[0]=0;
	while(i<n)
	{
		if(s[i]==s[j])
		{
			lps[i]=j+1;
			j++;
			i++;

		}
		else
		{
			if(j==0)
			{
				lps[i]=0;
				i++;
			}
			else
				j=lps[j-1];
		}
	}
	
	    // }

    if(lps[n-1]==0) cout<<"Just a legend\n";
    else{
        for(int i=n-2;i>=0;i--){
            if(lps[i]==lps[n-1]){
                cout<<s.substr(0,lps[n-1])<<"\n";
                return 0;
            }
        }

        if(lps[lps[n-1]-1] != 0) cout<<s.substr(0,lps[lps[n-1]-1])<<"\n";
        else cout<<"Just a legend\n";
    }


	// rep(i,1,n)
	// {
	// 	j=lps[i-1];
	// 	while(j>0 && s[i]!=s[j])
	// 		j=lps[j=1];
	// 	if(s[i]==s[j])j++;
	// 	lps[i]=j;
	// }

	

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}