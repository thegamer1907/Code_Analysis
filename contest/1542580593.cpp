#include<cstring>
#include<string>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<bitset>

using namespace std;

int n,m;
bool ha[1<<5];
bitset<4>a[100010];

int main(){
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++){
		int tmp=0;
		for(int j=0; j<m; j++){
			int x;
			scanf("%d",&x);
			a[i][j]=x;
			tmp=tmp<<1|x;
		}
		ha[tmp]=true;
	}
	bool f=false;
	for(int i=0; i<=(1<<m); i++){
		for(int j=0; j<=(1<<m); j++){
			if(ha[i] && ha[j] && (i&j)==0){
				f=true;
				break;
			}
		}
		if(f)break;
	}
	if(f)puts("YES");
	else puts("NO");
	
	return 0;
}