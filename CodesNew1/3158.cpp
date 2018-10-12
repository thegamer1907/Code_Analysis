#include <bits/stdc++.h>
#define fore(x,a,b) for(int x=a, qwerty=b; x<qwerty; x++)
#define ALL(a) (a).begin(),(a).end()
#define SZ(a) ((int)(a).size())
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define fst first
#define snd second
#define mp make_pair
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

int n,k,sum[400500],ans;
int a[400500];
vector<int> z;
void doit(int b) {
	fore(i,0,z.size()) {
		int tmp=0;
		if(z[i]) tmp+=sum[z[i]-1];
		int j=i+k;
		if(j>=z.size())tmp+=n-z[i];
		else tmp+=z[j]-z[i];
		ans=max(ans,tmp);
		j=j>=z.size()?n:z[j]; // WARNING
		if(b&&tmp==ans){fore(h,z[i],j) a[h]=1; break;}
	}
	if(!b) return;
	cout<<ans<<"\n";
	fore(i,0,n) cout<<a[i]<<" "; cout<<endl;
	exit(0);
}

int main(){	FIN;
	cin>>n>>k;
	fore(i,0,n) cin>>a[i];
	fore(i,0,n) if(!a[i])z.pb(i);
	ans=sum[0]=a[0]==1;
	fore(i,1,n)if(a[i])sum[i]=sum[i-1]+1,ans=max(ans,sum[i]); // SUM
	for(int i=n-1;i>=0;i--) if(sum[i]) sum[i]=max(sum[i],sum[i+1]); // TRUCASO
	doit(0);
	doit(1);
	
}