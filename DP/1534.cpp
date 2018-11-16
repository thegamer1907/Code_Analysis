#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <set>
//#include <bits/stdc++.h>
using namespace std;
int a[107];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		a[i]=a[i-1]+a[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			ans=max(ans,a[i-1]+(j-i+1-(a[j]-a[i-1]))+a[n]-a[j]);
		}
	}
	printf("%d\n",ans);
	return 0;
}

