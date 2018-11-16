#include <bits/stdc++.h>
using namespace std;
int n,a[200],b[200],i,j,l,max1=0,k,s;
int main(){
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];
	
	for(i=1;i<=n;i++)
	for(j=i;j<=n;j++){
	
	  for(k=1;k<=n;k++)
			b[k]=a[k];
	  
	  for(l=i;l<=j;l++)
	  b[l]^=1;
	  s=0;
	  for(k=1;k<=n;k++)
	  s+=b[k];
	  
	  max1=max(max1,s);
	}
		
cout<<max1;
return 0;	
}