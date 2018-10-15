#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("in.in", "r", stdin),freopen("out.out", "w", stdout);
#define ll long long int
#define FF first
#define SS second
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define plld(x) printf("%lld\n",x)
#define pss printf
#define MOD 1000000007
#define INF 1e18
#define eps 0.00001
#define endl '\n'
#define debug(n1) cout<<n1<<endl
const int N = 1e5;  // limit for array size
ll n;  // array size

int main(){
	int n;cin>>n;
	
	vector<string>s(n);
	vector<string>s1;
	
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	int p=0;
	
	for(int i=n-1;i>0;i--){
		string g="#";
		p=0;
		
		for(int j=1;j<min(s[i].length(),s[i-1].length());j++){
			if(s[i][j]==s[i-1][j]){
				g+=s[i-1][j];
			}
			else if(s[i][j]<s[i-1][j]){
				s1.pb(g);p=1;s[i-1]=g;break;
			}
			else{
				s1.pb(s[i-1]);p=1;break;
			}
		}
		if(!p&&s[i].length()<s[i-1].length()){
			s1.pb(s[i]);
			s[i-1]=s[i];
		}
		else if(!p&&s[i].length()>=s[i-1].length()){
			s1.pb(g);
			s[i-1]=g;
		}
	}
	
	
	
	for(int i=s1.size()-1;i>=0;i--){
		cout<<s1[i]<<endl;
	}
	cout<<s[n-1]<<endl;
	return 0;
}
