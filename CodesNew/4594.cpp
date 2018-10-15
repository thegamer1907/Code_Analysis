#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;
int n,a[1000010];
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    	scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	int k=1;
	for(int i=1;i<=n;i++){
		if(a[k]*2<=a[i]){
			k++;
		}
	}
	k--;
	k=min(k,n/2);
	printf("%d",n-k);
	return 0;
}