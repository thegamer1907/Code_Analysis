#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,s=-1,x=0,sm=-1,z;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>z;
		if(z==0){
			z=1;
		}
		else{
			z=-1;
			x++;
		}
		s=max(z,s+z);
		sm=max(sm,s);
	}
	cout<<x+sm;
	return 0;
}