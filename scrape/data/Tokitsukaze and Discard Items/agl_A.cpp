#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,m,k;cin>>n>>m>>k;
	long long int sp[m];
	for(int i=0;i<m;i++){
		cin>>sp[i];
	}
	long long int t=0,tr=k,cnt=0,flag=0;
	for(long long int i=0;i<m;){
		// cout<<k<<" f "<<endl;
		if(sp[i]<=k){
			t++;
			i++;
			if(flag==0){
				cnt++;
				flag=1;
			}
		}
		else{
			flag=0;
			if(t!=0){
				k = k+t;
				t=0;
			}
			else{
				long long int m = sp[i]-k;
				if(m%tr==0){
					m = m/tr;
					m = m-1;
				}
				else {
					m = m/tr;
				}
				m = m*tr;
				k = k+m+tr;
				// cout<<k<<" "<<m<<endl;
				// k = k+tr;				
			}
		}
	}
	cout<<cnt<<endl;
}