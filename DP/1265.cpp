#include<bits/stdc++.h>
using namespace std;
int n,a[105],ans;
int main(){
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++){
			int x=0;
			for(int k=0;k<i;k++)
				x+=a[k];
			for(int k=j+1;k<n;k++)
				x+=a[k];
			for(int k=i;k<=j;k++)
				if(a[k]==0)x++;
			ans=max(ans,x);
		}
	cout << ans;
	return 0;
}