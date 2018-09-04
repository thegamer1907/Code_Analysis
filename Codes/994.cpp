/*THE BLIND CODER */
#include"bits/stdc++.h"
using namespace std;
/*--------------------------------#defines------------------------------------------*/
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
/*-------------------------------CODE START-----------------------------------------*/
const int N=1<<20;
const int MOD=1e9+7;
typedef long long int ll;
priority_queue< pair<ll,int> >pq;
vector< pair<ll,ll> >vp;
map<char ,ll>mp,mpp;
ll dp[N];
vector<ll>v,v1,v2;
stack<ll>s1;
ll visit[N];
struct domingo{
int val,left,right;
}o[N];
ll BIT[N];
ll seg_tree[4*N];
set<long long int>se[250];
 string s;
 ll n , k;
int value_de(int mid)  {
	int j =0 , flag = 0;
	for(int i = 0 ; i < mid;i++){
		mp[s[i]]++;
	}
	if(min(mp['a'] , mp['b']) <=k)
			flag = 1;
	for(int i = mid; i < (int)s.size() ;i++,j++){
		mp[s[i]]++;
		mp[s[j]]--;
		if(min(mp['a'] , mp['b']) <=k)
			flag = 1;

	}
	mp.clear();
	if(flag)
		return 1;
	return 0 ;
}
int main()
{ fast;
   ll sum(0),flag(0),ct(0),p(0),q(0);
   cin >> n >>k;
    cin >> s;
    ll high = (int)s.size() , low =0 ,mid;
    	while(low<=high){
    		mid=(high+low)/2;
    		if(value_de(mid)){
    		low = mid+1;
    		}
    		else
    		high = mid- 1;
    	}
    	cout << low - 1 ;
    }
