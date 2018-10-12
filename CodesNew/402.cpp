#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,t,i=0,j=0,c=0,c1=0,ans=0;
	cin>>n>>t;
	
	int a[n];
	
	for(;i<n && cin>>a[i];i++);
	
	
	for(i=0;i<n;){
		
	   while(c+a[j]<=t && j<n){
	   	 c+=a[j];
	   	 c1++;
	   	 j++;
	   }
	   
	   ans=max(ans,c1);
	   c-=a[i];
	   c1--;
	   i++;	
	}
	
	cout<<ans;
	return 0;
}