#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m,idx;
	scanf("%d%d",&n,&m);
	int a[n],cnt[n];
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	set<int> s ;
	for(int i=n-1;i>=0;i--)
	{
	    s.insert(a[i]);
	    cnt[i]=s.size();
	}
	while(m--)
	{
	    scanf("%d",&idx);
	    printf("%d\n",cnt[idx-1]);
	}
	return 0;
}

