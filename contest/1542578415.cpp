#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define f first
#define s second

typedef long long int ll;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n][k];
	bool b[20];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;i++){
		int idx=0;
		for(int j=0;j<k;j++){ 
			cin>>a[i][j];
			idx += a[i][j]*pow(2,k-j-1);
		}
		//printf("idx=%d\n",idx);
		b[idx]=1;
	}
	if(b[0]){
		cout<<"YES";
		return 0;
	}

	for(int i=1;i<16;i++){
		if(b[i]){
			for(int j=1;j<16;j++){
				bool flag=1;
				for(int bit=0;bit<4;bit++){
					if((i&(1<<bit)) && (j&1<<bit)){
						flag=0;
						break;
					}
				}
				if(flag && b[j]){
					cout<<"YES";
					return 0;
				}
			}
		}
	}
	cout<<"NO";
	return 0;
}