#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,s=-1,x=0,sm=-1;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1){
			b[i]=-1;
			x++;
		}
		else{
			b[i]=1;
		}
	}
	for(int i=0;i<n;i++){
		s=max(b[i],s+b[i]);
		sm=max(sm,s);
	}
	cout<<sm+x;
	return 0;
}