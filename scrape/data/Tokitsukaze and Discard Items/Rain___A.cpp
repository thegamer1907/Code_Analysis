#include<bits/stdc++.h>
using namespace std;
long long d[100005];

int main(){
	long long n,m,k;
	cin>>n>>m>>k;
	
//	cout<<n;
	vector<long long> vec;
	for(int i=1;i<=m;i++){
		long long t;
		scanf("%lld",&t);
		vec.push_back(t);
	}
	
	long long s=1,plus=0,ans=0;
	for(int i=0;i<m;){
		long long temp=0;
		long long flag=0;
		while(vec[i]>=s+plus&&vec[i]<s+k+plus){
			flag=1;
		//	cout<<i<<" ";
			temp++;
			i++;
			if(i==m){
				break;
			}
		}
		plus+=temp;
		if(flag==0){
			//cout<<s<<" "<<vec[i]<<" "<<plus<<" "<<k<<endl;
			s=(vec[i]-plus-1)/k*k+1;
			//s-=plus;
			//cout<<s<<endl;
		//	getchar();
			i--;
		}
		
		if(flag)ans++;
	 //cout<<" :"<<ans<<endl;
		if(!flag)i++;
	}
	
	cout<<ans<<endl;
	return 0;
}