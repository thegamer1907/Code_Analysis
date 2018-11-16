#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,x=0,y,max_,z;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1){
			x++;
		}
	}
	max_=0;

	for(int i=0;i<n;i++){
		z=0;
		y=0;
		for(int j=i;j<n;j++){
			if(a[j]==0){
				y++;
			}
			else{
				z++;
			}
			max_=max(max_,x+y-z);
		}
	}
	cout<<max_;

	return 0;
}