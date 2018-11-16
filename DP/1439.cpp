#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[110],book[110];
	cin>>n;
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
		book[i]=book[i-1]+a[i];
	} 
	int ans=-1000;
	for(int i=0;i<n;++i){
		for(int j=i;j<n;++j){
			int leng=j-i+1;
			int sum=book[n-1]+book[i-1]-book[j]+leng-(book[j]-book[i-1]);
			ans=max(sum,ans);
		}
	}
	cout<<ans<<endl;
	return 0;
} 