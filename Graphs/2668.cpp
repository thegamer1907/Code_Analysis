#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int n,m,k;

pair<int,int> get_next(pair<int,int> pos){
	if(pos.first%2==1){
		if(pos.second==m){
			pos.first+=1;
		}
		else{
			pos.second+=1;
		}
	}
	else{
		if(pos.second==1){
			pos.first+=1;
		}
		else{
			pos.second-=1;
		}
	}
	return pos;
}

int main(){
	scanf("%d%d%d",&n,&m,&k);
	pair<int,int> p={1,1};
	for(int i=1;i<k;i++){
		printf("2");
		printf(" %d %d",p.first,p.second);
		p=get_next(p);
		printf(" %d %d",p.first,p.second);
		p=get_next(p);
		printf("\n");
	}
	printf("%d",n*m-2*k+2);
	for(int i=1;i<=(n*m-2*k+2);i++){
		printf(" %d %d",p.first,p.second);
		p=get_next(p);
	}
	printf("\n");
	return 0;
}
