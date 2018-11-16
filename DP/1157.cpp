#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
#include<iomanip>
#include<utility>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
#define fi first
#define sec second
#define rep(a,b,c) for(int a=1;a<=b;a+=c)
#define repp(a,b,c,d) for(int a=b;a<=c;a+=d)

const double PI=acos(-1);
const double EPS=1e-12;


using namespace std;


int main(){
	int in,maxx,cnt,c;
	int data[1005];
	scanf("%d",&in);
	maxx=0;
	cnt=0;
	c=0;
	rep(i,in,1){
		scanf("%d",&data[i]);
		if(data[i]==1)c++;
	}
	rep(i,in,1){
		if(data[i]==0)cnt++;
		if(data[i]==1||i==in){
			if(cnt>0){
				if(maxx<cnt)maxx=cnt;
				if(data[i]==1)cnt--;
			}
		}
	}
	if(c==in)c--;
	printf("%d\n",c+maxx);
	return 0;
}
