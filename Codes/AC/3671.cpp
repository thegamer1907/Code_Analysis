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
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,int> pli;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef vector<pli> vpli;
typedef vector<vi> mat;

inline ll read(){
	ll Hashimoto=0,Kanna=1;
	char I_Love=getchar();
	while(I_Love<'0'||I_Love>'9'){
		if(I_Love=='-')Kanna=-1;
		I_Love=getchar();
	}
	while(I_Love>='0'&&I_Love<='9'){
		Hashimoto=Hashimoto*10+I_Love-'0';
		I_Love=getchar();
	}
	return Hashimoto*Kanna;
}

#define I_Love_Hashimoto_Kanna main
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define filein(s) freopen(s,"r",stdin);
#define fileout(s) freopen(s,"w",stdout);
#define file freopen("I_Love_Hashimoto_Kanna.out","w",stdout);
#define RE cout<<"I_Love_Hashimoto_Kanna"<<endl;
#define Tone(Kanna) cout<<Kanna<<endl;
#define Tall(Hashimoto,Kanna) for(int I_Love=0;I_Love<Kanna;I_Love++)cout<<Hashimoto[I_Love]<<(I_Love==Kanna-1?"\n":" ");
#define FOR(I_Love,Hashimoto,Kanna) for(int I_Love=Hashimoto;I_Love<Kanna;I_Love++)
#define MP(Hashimoto,Kanna) make_pair(Hashimoto,Kanna)
#define REV(Kanna) reverse(Kanna.begin(),Kanna.end());
#define SORT(Kanna) sort(Kanna.begin(),Kanna.end());
#define inf (int)1e9
#define linf (ll)1e18
#define mod (inf+7)

int cb=0,cs=0,cc=0;
int nb,ns,nc,pb,ps,pc;
ll t;
inline bool check(ll x){
	ll b,s,c;
	b=max(0ll,(x*cb-nb))*pb;
	s=max(0ll,(x*cs-ns))*ps;
	c=max(0ll,(x*cc-nc))*pc;
	if(b+s+c<=t)return 1;
	else return 0;
	
	
}

int I_Love_Hashimoto_Kanna() {
  fastio;
  string s;
  cin>>s;cin>>nb>>ns>>nc>>pb>>ps>>pc>>t;
  FOR(i,0,s.size()){
  	if(s[i]=='B')cb++;
  	if(s[i]=='S')cs++;
  	if(s[i]=='C')cc++;
	}
  ll l=0,r=(ll)1e13;
  while(l<r-1){
  	ll mid=(l+r)/2;
  	if(check(mid))l=mid;
  	else r=mid;
	}
  Tone(l);
  
  
  
  return 0;
}
