#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	bool a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int res=0;
			for(int k=0;k<n;k++){
				if(k>=i&&k<=j){
					res+=1^a[k];
				}else{
					res+=a[k];
				}
			}
			ans=max(ans,res);
		}
	}
	cout<<ans;
	return 0;
}
