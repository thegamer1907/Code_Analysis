#include<stdio.h>
#include<iostream>
using namespace std;
int a[100005];
int main(){
	int n;
	scanf("%d",&n);
	int minn=1000000000+7;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]<minn)minn=a[i];
	}
	for(int i=1;i<=n;i++)a[i]-=minn;
	int pos=(minn+1)%n;
	if(pos==0)pos=n;
	int t=0;
	while(true){
		if(a[pos]<=t){
			printf("%d\n",pos);
			break;
		}
		t++;
		pos++;
		if(pos>n)pos-=n;
	}
} 