#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi>vvi;
typedef vector<string> vs;

#define REP(i,n) for (i=0;i<n;i++)
#define FOR(i,p,k) for (i=p; i<=k;i++)

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ss string
#define ll long long
#define pb push_back
#define p2(a,b) cout<<a<<" "<<b<<endl;
#define p3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl;	
#define all(a) a.begin(),a.end()
#define set_val(arr,n,x) fill_n(arr,n,x)
#define M 1000000007
//std::vector<int>::iterator

int main(){
	fastio;
	int n,m,i,j,ans=0;
	cin>>n;
	int a[n];
	REP(i,n) cin>>a[i];
	sort(a,a+n);
	
	cin>>m;
	int b[m];
	REP(i,m) cin>>b[i];
	sort(b,b+m);

	i=0,j=0;
	while(i<n && j<m){
		if(abs(a[i]-b[j])<=1) ans++,i++,j++;
		else if(a[i]>b[j]) j++;
		else if(a[i]<b[j]) i++;
	}
	cout<<ans;
	return 0;
}