#include<iostream>
#include<map>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<sstream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<bitset>
using namespace std;
long long a[200005];
long long b[200005];
int main(){
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int n,m;
	
	while(cin>>n>>m){
		long long total=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			total+=a[i];	
		}
		for(int i=0;i<m;i++)cin>>b[i];
		
		
		for(int i=1;i<n;i++)a[i]=a[i]+a[i-1];
		int pos=0;
		long long sum=0;
		
		for(int i=0;i<m;i++){
			sum+=b[i];
			
			if(sum>=total){
				cout<<n<<endl;
				sum=0;
				continue;
			}
			
			int lo=0;
			int hi=n;
			
			for(int j=0;j<20;j++){
				int me=(lo+hi)/2;
				if(a[me]<=sum){
					lo=me+1;
				}else{
					hi=me;
				}
					
			}
			
			cout<<(n-lo)<<endl;
		}
		
	}
	
    return 0;
}


