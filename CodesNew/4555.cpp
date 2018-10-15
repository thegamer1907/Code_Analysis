#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	sort(s,s+n);
	int x=n-1;
	for(int i=n/2-1;i>=0;i--){
		if(s[x]>=s[i]*2)
			x--;
	}
	cout<<x+1;
	return 0;
}