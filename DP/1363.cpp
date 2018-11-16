#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int c=0;
	for(int i=0;i<n;i++){
		if(a[i]==1)
			c++;
	}
	int mx=INT_MIN;
	for(int i=0;i<n;i++){
		int z=0,o=0;
		for(int j=i;j<n;j++){
			if(a[j]==0)
				z++;
			else
				o++;
			mx=max(mx,z-o);
		}
	}
	cout<<c+mx;
	return 0;
}