#include<iostream>
using namespace std;
int n,m,a[101];
int i,maxi,sum;
int ans1,ans2;
main(){
	cin>>n>>m;
	for(i=0;i<n;i++){
	 cin>>a[i];
	 sum+=a[i];
	 maxi=max(maxi,a[i]);
	}
	if(sum+m-maxi*n<=0){
	 cout<<maxi<<" "<<maxi+m;
	}
	else if(sum+m-maxi*n>0){
	 int m1=m;
	 for(i=0;i<n;i++){
	  m-=maxi-a[i];
	  a[i]=maxi;
	 }
	 if(m%n==0) cout<<maxi+m/n<<" "<<maxi+m1;
	 else cout<<maxi+m/n+1<<" "<<maxi+m1;
	}
}
