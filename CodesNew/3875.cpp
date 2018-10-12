#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n,maxa,a[300005];
double sum;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>maxa){
			maxa=a[i];
		}
		sum+=a[i]; 
	}
	cout<<max(int(ceil(sum/(n-1))),maxa); 
	return 0;
}