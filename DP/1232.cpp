#include<bits/stdc++.h>

#define LL long long
#define LD long double
#define pb push_back
#define mp make_pair
#define INF 1000000007
#define scn(a) scanf("%lld", &a)

using namespace std;

int main() {
	LL n;
	scn(n);

	LL store[n];

	LL i=0,j=1,sum=0,ans=0,ians=0;

	for(i=0;i<n;i++) {
		scn(store[i]);
		if(store[i]==1)ians++;
	}

	i=0;
	j=i;

	sum=ians;
	while(i<=j && j<n) {
		if(store[j]==1)
			sum--;
		else
			sum++;

		if(sum>=ans)ans=sum;

		// cout<<i<<" "<<j<<" "<<sum<<endl;

		if(sum<=ians) {
			i=j+1;
			sum=ians;
		}

		j++;
	}

	cout<<ans;
}