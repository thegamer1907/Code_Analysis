#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
int n,a[maxn];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n==1){
		if(a[1]%2==0)puts("cslnb");
		else puts("sjfnb");
		return 0;
	}
	
	long long sum=0;//??????????
	
	sort(a+1,a+1+n);
	for(int i=1;i<=n-2;i++)
		if(a[i]==a[i+1] && a[i]==a[i+2]){
			puts("cslnb");return 0;
		}
	int flag=0;
	for(int i=1;i<=n-1;i++)
		if(a[i]==a[i+1]){
			if(flag){
				puts("cslnb");return 0;
			}
			else {
				sum=1;flag=1;
				a[i]--;
			}
		}
	sort(a+1,a+1+n);
	for(int i=1;i<=n-1;i++)
		if(a[i]==a[i+1]){
			puts("cslnb");return 0;
		}
	
	for(int i=1;i<=n;i++){
		if(a[i]<i-1){
			puts("cslnb"); 
			return 0;
		}
		else sum+=a[i]-(i-1);
	}
	
	if(sum%2==0)
		puts("cslnb");
	else puts("sjfnb");
}