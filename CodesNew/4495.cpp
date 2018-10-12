#include <bits/stdc++.h>
using namespace std;
int n,x,y,arr[5*int(1e5)];
int main(){
	       cin>>n;
	       for(int i=0;i<n;i++){
	        cin>>arr[i];
		   }
		   sort(arr,arr+n);
		   y=n/2;
		   x=0;
		   while(1){
		   	if(arr[y]>=2*arr[x]){
                x++; y++;
            }
            else
                y++;
		   	if(y>=n||x>=n/2)
                break;
		   }
		   cout<<n-x;
}
