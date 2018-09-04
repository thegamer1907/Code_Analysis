#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

const int MAX=1e5+5;
int n,a[MAX],ans;

int main(){
	int i;
	int mn=0x3f3f3f3f;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	    mn=min(a[i],mn);
	}
	ans=mn%n;
	for(i=0;i<n;i++)
	    a[i]-=mn;
	for(i=0;i<n;i++){
		if(a[ans]-i<=0){
			printf("%d\n",ans+1);
			return 0;
		}
		ans=(ans+1)%n;
	}
}