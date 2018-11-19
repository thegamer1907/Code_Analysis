#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int h,m,s,t1,t2;
bool block[43200];
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(h==12)h=0;
	if(t1==12)t1=0;
	if(t2==12)t2=0;
	block[3600*h+60*m+s]=true;//hour
	block[720*m+12*s]=true;//minute
	block[720*s]=true;
	if(t1>t2)swap(t1,t2);
	t1*=3600;t2*=3600;
	bool flag=true;
	for(int i=t1;i<=t2;++i){
		if(block[i]){
			flag=false;
			break;
		}
	}
	if(flag){
		printf("YES\n");
		return 0;
	}
	else flag=true;
	for(int i=t2;i<43200;++i){
		if(block[i]){
			flag=false;
			break;
		}
	}
	if(flag){
		for(int i=0;i<=t1;++i){
			if(block[i]){
				flag=false;
				break;
			}
		}
	}
	if(flag){
		printf("YES\n");
		return 0;
	}
	else
	printf("NO\n");
	return 0;
}

