#include<iostream>
#include<cstdio>
#include<algorithm> 
#include<cstring>
#include<string>
#include<cctype>
#include<queue>
#include<set>
#include<stack>
using namespace std;
const int maxn = 233;
char minm[5];
char mins[maxn][5],fr,bc;
int n;
bool flag;
int main(){
	scanf("%s",minm);
	fr=minm[0];bc=minm[1];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",mins[i]);
		char umin[3];
		if(!strcmp(mins[i],minm)){
			flag=1;
		}
		for(int j=0;j<=1;j++){
			umin[j]=mins[i][1-j];
			if(j!=1) continue;
			if(!strcmp(umin,minm)){
				flag=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(mins[i][1]==fr&&mins[j][0]==bc){
				flag=1;
			}
		}
	}
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}