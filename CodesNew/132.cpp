#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;++i)
#define lli long long int
#define max2(a,b) ((a)>(b) ? (a) : (b))
int main(){
	int n;int l;
	cin>>n>>l;
	double a[n];
	rep(i,0,n) cin>>a[i];
	if(n==1){
		cout<<max(a[0],l-a[0]);
		return 0;
	}
	sort(a,a+n);

	//rep(i,0,n)cout<<"a["<<i<<"]: "<<a[i]<<'\n';
	 double  mx=a[1]-a[0];
	rep(i,1,n){
		// cout<<"On i="<<i<<" "<<a[i];
		if(a[i]-a[i-1]>mx){
			mx=a[i]-a[i-1];
			// cout<<"max is "<<mx<<" now\n";
		}
		

	}
	//cout<<"max is "<<mx<<" now\n";
	// cout<<endl<<mx;
	lli new_max=max2(a[0],l-a[n-1]);
	//cout<<"first: "<<a[0]<<" last: "<<l-a[n-1];    
	//cout<<"mx: "<<mx<<" new_max: "<<new_max<<endl;
//	cout<<"\n"<<(mx)/(2)<<" ";
	 cout<<fixed<<setprecision(9)<<max2(mx,2*new_max)/(2);
	return 0;
}
