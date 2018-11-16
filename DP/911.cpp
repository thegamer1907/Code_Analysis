#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<ll,ll>
#define mp make_pair
#define mod 1000000007

//vector<int> dp;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> c1(n+1),c2(n+1);c1[0]=0;c2[0]=0;
	c1[1]=a[0];c2[1]=1-a[0];
	for(int i=1;i<n;i++){
		c1[i+1]=c1[i]+a[i];
		c2[i+1]=c2[i]+(1-a[i]);
	}
	/*for(int i=0;i<=n;i++){
		cout<<c1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<=n;i++){
		cout<<c2[i]<<" ";
	}*/
	int ma=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			ma=max(ma,c1[i-1]+(c2[j]-c2[i-1])+(c1[n]-c1[j]));
		}
	}
	cout<<ma<<endl;
	return 0;
}