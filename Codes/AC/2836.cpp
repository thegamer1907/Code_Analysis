#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iomanip>
#include<vector>
#include<queue>
#include<deque>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
#include<cctype>
#include<set>
#include<map>
#include<bitset>
#include<stack>
#include<ctime>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,int> pli;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<pli> vpli;

#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file freopen("out.out","w",stdout);
#define RE cout<<233<<endl;
#define Tone(x) cout<<x<<endl;
#define Tall(x,n) for(int i=0;i<n;i++)cout<<x[i]<<(i==n-1?"\n":" ");
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REV(a) reverse(a.begin(),a.end())
#define SORT(a) sort(a.begin(),a.end())
#define inf (int)1e9
#define linf (ll)1e18
#define mod (inf+7)

string s;
int z[1111111];
void pre(){
	int l=0,r=0;
	FOR(i,1,s.size()){
		if(i>=r){
			while(i+z[i]<s.size()){
				if(s[z[i]]==s[z[i]+i])z[i]++;
				else break;
			}
			if(l+z[i]-1>r){
				l=i,r=i+z[i]-1;
			}
		}
		else {
			int can=z[i-l];
			if(i+can-1<=r){
				z[i]=can;
			}
			else {
				int cur;
				for(cur=r;cur<=i+can&&cur<s.size();cur++){
					if(s[cur-l]!=s[cur]){
						break;
					}
				}
				z[i]=cur-i;
			  if(l+z[i]-1>r){
				  l=i,r=i+z[i]-1;
			  }
			}
		}
	}
}

int main() {
  fastio;
  cin>>s;
	pre();
	int mx=0;
	FOR(i,0,s.size()){
		//cout<<z[i];
		if(z[i]>z[mx])mx=i;
	}
	int ans=0;
	FOR(i,0,s.size()){
		if(i==mx)continue;
		if(z[i]==0)continue;
		if(z[s.size()-z[i]]==z[i]){
			ans=max(ans,z[i]);
		}
	}
	if(ans)cout<<s.substr(0,ans)<<endl;
	else Tone("Just a legend");

  return 0;
}
