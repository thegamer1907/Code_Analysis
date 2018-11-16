#include <bits/stdc++.h>
using namespace std;  
int a[110],n,num[2],ans =0;
int main() { 
    scanf("%d",&n); 
	for(int i=0;i<n;i++){
			scanf("%d",a+i);
		    if(a[i]==1)ans++;
		}
		if(ans==n) { printf("%d\n",n-1); return 0;;}
		int paa=ans;
		for(int i=0;i<n;i++)
			for(int j=i;j<n;j++){
			   num[0]=num[1]=0;
			   for(int k=i;k<=j;k++)num[a[k]]++;
			   if(num[0]>num[1])ans=max(ans,paa+num[0]-num[1]);
			}
	cout<<ans; 
      return 0;
} 