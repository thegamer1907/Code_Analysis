#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;

int done[17];

int main()
{
	//ios_base::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);

	int n, k;
	scanf("%d %d", &n, &k);

	int ar[100001], sum=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<k;j++)
		{
			if(j==0) sum=0;
			int a;
			scanf("%d", &a);
			sum*=2;
			sum+=a;
			if(j==k-1) ar[i]=sum, done[sum]=1;
		}

//	for(int i=0;i<16;i++) printf("%d\n", done[i]);

	for(int i=0;i<16;i++)
		for(int j=0;j<16;j++)
			if(done[i]==1 && done[j]==1 && (i&j)==0)
			{
				printf("YES\n");
				return 0;
			}
	printf("NO\n");
	return 0;
}

