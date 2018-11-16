#include<bits/stdc++.h>
using namespace std;

int n,h[105],a[105],total=0,ans;

int main(){
	cin >> n;
	cin >> a[0];
	if(a[0]==0)	h[0]=1;
	else{
		h[0]=-1;
		total=1;
	}
	for(int i=1;i<n;i++){
		cin >> a[i];
		if(a[i]==0) h[i]=h[i-1]+1;
		else h[i]=h[i-1]-1;
		if(a[i]==1) total++;
	}
	for(int l=0;l<n;l++){
		for(int r=l;r<n;r++){
			ans=max(ans,total+(h[r]-h[l-1]));
		}
	}
	cout << ans << '\n';
}
