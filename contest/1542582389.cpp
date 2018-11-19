#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
inline int read(){
	register int c;
	while(c=getchar(), c!='0' && c!='1');
	return c=='1';
}
bool test[17];
int main(){
	int N, M;
	scanf("%d%d", &N, &M);
	for(int i=1; i<=N; i++){
		int t=0;
		for(int j=0; j<M; j++)t|=(read()<<j);
		test[t]|=1;
	}
	bool flag=false;
	if(test[0])flag=true;
	else for(int i=1; i<16; i++){
		for(int j=1; j<16; j++)if((i&j)==0){
			if(test[i]&&test[j]){
				flag=true; goto out;
			}
		}
	}
out:;
	puts(flag?"Yes":"No");
}