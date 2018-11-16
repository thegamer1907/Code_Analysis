#include<bits/stdc++.h>
using namespace std;

int n;
int a[110];

int cnt1[110],cnt2[110];
int ans=0;

int main() {
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		scanf("%d",&a[i]);
		cnt1[i]=cnt1[i-1];
		cnt2[i]=cnt2[i-1];
		if (a[i]==0) cnt1[i]++;
		else cnt2[i]++;
	}
	for (int i=1;i<=n;i++)
		for (int j=i;j<=n;j++) {
			int tmp=cnt2[i-1]+cnt1[j]-cnt1[i-1]+cnt2[n]-cnt2[j];
			ans=max(ans,tmp);
		}
	cout<<ans<<endl;
}
