#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    int ans=0;
	for(int i=0;i<n;i++){
		if(A[i]>0&&A[i]>=A[k-1])ans++;
	}
	cout<<ans<<endl;
}