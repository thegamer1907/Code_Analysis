#include <bits/stdc++.h>

#define N 209

using namespace std;

int main(){
	int i,j,t1,t2,t3,t4,x,y,ans=0;
	scanf("%d %d",&x,&y);
	while(x>0 && y>0){
		if(x==1 && y==1){
			break;
		}
		if(x<y){
			swap(x,y);
		}
		ans++;
		x-=2;
		y+=1;
	}
	printf("%d\n",ans);
    return 0;
}