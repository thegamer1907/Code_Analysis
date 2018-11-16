#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,k,n,l,c;
	cin>>n;
	int ar[n],tr[n],max=0;
	for(i=0;i<n;i++)
	 cin>>ar[i];
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			for(k=0;k<n;k++){
				tr[k]=ar[k];
			}
			for(k=i;k<=j;k++){
				tr[k]=1-tr[k];
			}
			c=0;
			for(k=0;k<n;k++){
				if(tr[k]==1) c++;
			}
			if(c>max) 
			  max=c;
		}
	}
	cout<<max;
	return 0;
}