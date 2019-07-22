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
	ll next;
	p=a;
	scanf("%lld%lld%lld",&n,&m,&k);
	for(i=0;i<m;i++){
		scanf("%lld",a+i);
	}
	nums=0;
	while(m){
		if(p[0]>k){
			page = (p[0]-nums-1)/k;
			for(i=0;i<m;i++){
				if(p[i]-nums>(page+1)*k)break;
				p[i]-=nums+page*k;
			}
		}
		next=0;
		for(i=0;i<m;i++){
			if(p[i]>k)break;
			nums++;
			next++;
		}
		if(nums){
			p+=next;
			times++;
			m-=next;
		}
	}
	printf("%d\n",times);
	
	
	
	
	return 0;
}