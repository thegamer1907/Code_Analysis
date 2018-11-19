#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cassert>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<bitset>
using namespace std;
//char Input[40*1024*1024+5],*pos;
//#define Read() (strtol(pos,&pos,10))
#ifndef Read
int Read(){
	int ret=0,sgn=1;
	char ch;
	while(isspace(ch=getchar()));
	if(ch=='-'){
		sgn=-1;
		ch=getchar();
	}
	do{
		ret=ret*10+(ch-'0');
	}while(isdigit(ch=getchar()));
	return ret*sgn;
}
#endif
int Data[80050];
int n,k;
bool Check(int a,int b){
	for(int i=0;i<k;i++)
		if((a&(1<<i))&&(b&(1<<i)))
			return 0;
	return 1;
}
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
//#ifdef Read
//	fread(Input,40*1024*1024,1,stdin);
//	pos=Input;
//#endif
	n=Read(),k=Read();
	for(int i=1;i<=n;i++){
		int tmp=0;
		for(int j=0;j<k;j++){
			int x=Read();
			if(x)
				tmp|=(1<<j);
		}
		Data[tmp]++;
	}
	if(Data[0]){
		puts("YES");
		return 0;
	}
	int MaxState=(1<<k)-1;
	for(int i=0;i<MaxState;i++)
		for(int j=0;j<=MaxState;j++){
			if(i==j)
				continue;
			if(Check(i,j)&&Data[i]&&Data[j]){
				puts("YES");
				return 0;
			}
		}
	puts("NO");
	return 0;
}

