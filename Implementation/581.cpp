#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int ans=0;
	int y=0;
	while(n--){
		int x;
		cin>>x;
		if(x>0){
		if(ans==k-1){
			y=x;	
		}if(x>=y){
			ans++;
		}else{
		break;
		}
		}
	}cout<<ans;
}
