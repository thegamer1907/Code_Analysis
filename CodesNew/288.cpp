#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	int a[n+1];
	int p[n+1];
	int may=0;
	for(int i=0 ; i<n+1 ; i++){
		a[i]=0;
		p[i]=0;
	}
	for(int i=1 ; i<n+1 ; i++){
		cin>>a[i];
		p[i]=p[i-1]+a[i];
	}
	int i=0,j=1;
	for(int k=0 ; k<100000000 ; k++){
		if(i==n+1 || j==n+1){
			break;
		}
		if(p[j]-p[i]<=t){
			if(j-i>may){
				may=j-i;
			}
			j++;
		}
		else{
			i++;
		}
	}
	cout<<may;
	return 0;
}