#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int n,k;

int cnt[1000];

int main(){
	cin>>n>>k;
	
	for(int i=0;i<n;i++){
		int tmp = 0;
		for(int j=0;j<k;j++){
			int x;
			scanf("%d",&x);
			 tmp |= x<<j;
		}
		cnt[tmp] ++ ;
	}
	
//	for(int i=0;i<16;i++){
//		cout<<cnt[i]<<" ";
//	}
//	cout<<endl;
//	
	if(n==1){
		if(cnt[0]){
			puts("YES");
		}else{
			puts("NO");
		}
	}else{
		for(int i=0;i<16;i++){
			for(int j=0;j<16;j++){
				//if(i==j && cnt[i]<2)continue;
				if(cnt[i]==0)continue;
				if(cnt[j]==0)continue;
				if( (i & j) == 0){
					puts("YES");
					return 0;
				}
			}
		}
		puts("NO");
	}
	
	return 0;
}
