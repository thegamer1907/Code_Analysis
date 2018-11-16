#include<bits/stdc++.h>
using namespace std;
const int inf=~-(1<<31);
int mx=-100000;
int num[105];
int main(){
	int n,sum2=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
		sum2+=num[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				if(num[k]==1)sum--;
				else sum++;
			}
			mx=max(mx,sum);
		}
	}
	int ans=sum2+mx;
	cout<<ans<<endl;
	return 0;
}