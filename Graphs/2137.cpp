#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,c=0;cin>>n>>m;
	if(m==n){
		cout<<0;
	}else if(m<n){
		cout<<n-m;
	}
	else{
		while(m!=n){
			if(m<n){
				c+=n-m;
				m=n;	
			}
			else if(m%2==0){
				m/=2;
				c++;
			}else{
				m=m/2+1;
				c+=2;
			}
			
		}
		cout<<c;
	}
	return 0;
}
