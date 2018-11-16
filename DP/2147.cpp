#include <bits/stdc++.h>
#define maxn (int)(1e5)
using namespace std;
int a[maxn+10], freq[maxn+10]={0}, distinct_cnt[maxn+10]={0};
int main() {
	// your code goes here
	int n,m,val,idx; scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++) {
		scanf("%d",&a[i]);
		//a[i] = val;
		//freq[val]++;
		//for(int i=1;i<=n;i++) distinct_cnt[i] = distinct_cnt[i-1] + (freq[a[i]]==1); 
	}
	//it will be easier to iterate from backward for this problem
	//distinct_cnt[i] = number of distinct elements from position i to n
	distinct_cnt[n+1] = 0;
	for(int i=n;i>0;i--){
		freq[a[i]]++;
		distinct_cnt[i] = distinct_cnt[i+1] + (freq[a[i]]==1);
	}
	//for(int i=1;i<=n;i++) printf("%d ",a[i]); printf("\n");
	//for(int i=1;i<=n;i++) printf("%d ",distinct_cnt[i]); printf("\n");
	while(m--){
	     scanf("%d",&idx);
	     printf("%d\n",distinct_cnt[idx]);
	}
	return 0;
}