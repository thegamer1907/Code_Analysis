
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld\n",x)
#define clr(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
typedef pair<ll, ll> pii;
typedef vector< ll > vl;
typedef vector< pii > vpii;

//DONT WASTE YOUR TIME
//prove yourself
//remember....fuck ps&&as hard....show them your are better then them
//Be confident.....dont lose hope.......You can do it.....
//dimaag  khoob h tere meh ....bas concentration ki kami h
//CONCENTRATE
//A,B,C dimaag nhi ...observation h .....zyaada mat sochna unme.....bas observe karna dhyaan se aur implement kar daal jitni jaldi ho sake

//capture it

const ll N= 1e6+55,mod = 1e9+7;

vector<string>v,ans;
int main() {
 	//freopen("task.in","r",stdin);freopen("task.out","w",stdout);
	ll n,i,j,k;
	cin>>n;
	string s;
	for(i=0;i<n;i++){
		cin>>s;
		v.pb(s);
	}
	if(n==1){
		cout<<v[0]<<"\n";
		return 0;
	}
	string a,b,c;
	ll f=0;
	for(i=v.size()-2;i>=0;i--){
		a=v[i];
		b=v[i+1];
		c="";
		f=0;
		k=min(a.size(),b.size());
		for(j=0;j<k;j++){
			if(b[j]>a[j]){
				f=1;
				break;
			}
			if(b[j]<a[j])break;
			c+=a[j];
		}
		if(j<k){
			if(f==1)
			ans.pb(b);
			else{
				v[i]=c;
				ans.pb(b);
			}
		}
		else{
			if(a.size()>b.size()){
				v[i]=v[i+1];
				ans.pb(b);
			}
			else if(a.size()==b.size()){
				ans.pb(b);
			}
			else{
				ans.pb(b);
			}
		}
	}
	ans.pb(v[0]);
	for(i=ans.size()-1;i>=0;i--){
		cout<<ans[i]<<"\n";
	}
}