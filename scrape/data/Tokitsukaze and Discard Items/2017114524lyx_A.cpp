#include <bits/stdc++.h> 

using namespace std;

long long n,m,kk,k;
long long data[100005];
int main(){
	ios::sync_with_stdio(false);
    cin>>n>>m>>kk;
	for(int i=1;i<=m;i++)cin>>data[i];
	long long ans=0,save=0;
	long long i=1;
	while(i<=m){
//		cout<<k<<endl;
		int flag=0;
		while(data[i]<=k&&i<=m){
			flag++;
			i++;
		}
		if(i>m&&flag){
			ans++;
			break;
		}
		else if(i>m&&!flag){
			break;
		}
		if(!flag){
			k+=max((data[i]-k)/kk*kk,kk);
//			cout<<k<<" "<<(data[i]-k)/kk*kk<<endl;
			continue;
		}
		k+=flag;
		ans++;
		
	}
	cout<<ans<<endl;
	/*for(int i=1;i<=m;i++){
		if(data[i]>k){
			cout<<i<<" "<<data[i]<<" "<<k<<endl;
			if(save==0){
				ans++;
				break;
			}
			if(i!=m){
				ans++;
				k+=save;
				if(data[i]<=k)
					save=1;
				else
				    save=0;
			}
			if(i==m){
				ans+=2;
//				cout<<"#"<<endl;
				break;
				
			}
		}
		else{
			save++;
		}
	}
	cout<<ans<<endl;*/
	
	return 0;
}