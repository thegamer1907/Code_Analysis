#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define se second
#define fi first
#define pb push_back
#define pob pop_back()
#define pf push_front
#define pof pop_front()
#define mp make_pair
//#define endl '\n'
#define fast ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
const ll INF=2e9;
const int maxn=1000000+100;
const int mod=1e9+7;

int pw[maxn];

struct hsh{
	const int b=727;
	int f[maxn];
	hsh(const string &s){
	       f[0]=0;
		for(int i=0;i<s.size();i++)
			f[i+1]=((1ll*f[i]*b)+(1ll*s[i]))%mod;
	}
	int get(int l,int r){
		return (f[r]-((1ll*f[l]*pw[r-l])%mod)+mod)%mod;
	}
};

vector<int> ans; 
string s;
void print(int x){
	for(int i=0;i<=x;i++)
		cout<<s[i];
}

int main(){
	fast;
	pw[0]=1;
	for(int i=1;i<maxn-1;i++)
		pw[i]=(1ll*pw[i-1]*727)%mod;
	//string s;
	cin>>s;
	hsh x=s;
	int sz=s.size();
	for(int i=0;i<s.size()-1;i++){
		int a=x.get(0,i+1);
		int b=x.get(sz-i-1,sz);
	//	cout<<a<<' '<<b<<endl;
		if(a==b)
			ans.pb(i);
	}
	if(!ans.size()){
		cout<< "Just a legend";
		return 0;
	}
	int sh=x.get(0,ans.back()+1);
	bool s=0;
	for(int i=1;i<sz-ans.back()-1;i++){
		int a=x.get(i,i+ans.back()+1);
		if(a==sh){
			s=1;
			break;
		}
	}
	if(s){
		print(ans.back());
		return 0;
	}
	if(ans.size()==1){
		cout<<"Just a legend";
		return 0;
	}
	print(ans[ans.size()-2]);
}

	       	

