#include<bits/stdc++.h>
using namespace std;
#define scanint(n) scanf("%d",&n)
#define scanll(n) scanf("%lld",&n)
#define mp make_pair
#define pb push_back
#define s second
#define f first
#define pii pair<int,int>
#define reset(a,b) memset(a,b,sizeof a)
#define ll long long
#define MAXAND 0x7fffffff
#define MOD 1000000007
#define lch(x) (2*x)
#define rch(x) (2*x+1)
#define MID (l+r)/2
#define ALL(x) x.begin(),x.end()
#define dalam fl<=l && r<=fr
#define kiwo lch(idx),l,MID
#define tengen rch(idx),MID+1,r
#define mx 1000003
string ss,s1;
int n;
bool ya=false,sa=false,du=false;
int main(){
	cin>>ss>>n;
	for(int i=0;i<n;i++){
		cin>>s1;
		if(s1==ss)ya=true;
		if(s1[0]==ss[1])sa=true;
		if(s1[1]==ss[0])du=true;
	}
	if(ya || (sa&&du))cout<<"YES\n";
	else cout<<"NO\n";
}
