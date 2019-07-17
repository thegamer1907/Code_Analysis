#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<math.h>
#define PI acos(-1)
typedef long long ll;

ll a[1000000];


int main(){
	ll n;
	ll m,k;
	ll i;
	ll *p;
	ll page;
	int times=0;
	int nums;
	p=a;
	scanf("%lld%lld%lld",&n,&m,&k);
	for(i=0;i<m;i++){
		scanf("%lld",a+i);
	}
	while(m){
		if(p[0]>k){
			page = (p[0]-1)/k;
			for(i=0;i<m;i++){
				if(p[i]>(page+1)*k)break;
				p[i]-=page*k;
			}
		}
		nums=0;
		for(i=0;i<m;i++){
			if(p[i]>k)break;
			nums++;
		}
		if(nums){
			p+=nums;
			times++;
			m-=nums;
			for(i=0;i<m;i++){
				p[i]-=nums;
			} 
		}
	}
	printf("%d\n",times);
	
	
	
	
	return 0;
}