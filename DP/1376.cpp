#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,y,maxi=0,z,x=0;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
		if(ar[i]==1)
			x++;
	}

	for(int i=0;i<n;i++){
	    y=0;
	    z=0;
		for(int j=i;j<n;j++){
			if(ar[j]==0)
				y++;
			else
				z++;
			maxi=max(maxi,x+y-z);
		}
	}
	cout<<maxi;

	return 0;
}