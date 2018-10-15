#include <bits/stdc++.h>
using namespace std;
int n,i,j,x;
int main(){
	       cin>>n;
	       int a[n];
	       for(i=0;i<n;i++){
	        cin>>a[i];	
		   }
		   sort(a,a+n);
		   j=n/2;
		   i=0;
		   while(true){
		   	if(a[j]>=2*a[i]){x++; j++; i++;} else j++;
		   	if(j>=n || i>=n/2) break;
		   }
		   cout<<n-x;
}