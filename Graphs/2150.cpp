#include <stdio.h>
#include <queue>
#include <string.h>

using namespace std;

int main(){
	
	int ar[10001];
	int n,m;
	scanf("%d %d",&n,&m);
	queue <int> q;
	memset(ar,-1,sizeof(ar));
	q.push(n);
	ar[n]=0;
	while(!q.empty()){
		int t=q.front();
		q.pop();
		if(t-1&&ar[t-1]==-1){
			ar[t-1]=ar[t]+1;
			q.push(t-1);
		}
		if(t*2<=10000&&ar[t*2]==-1){
			ar[t*2]=ar[t]+1;
			q.push(t*2);
		}
	}
	printf("%d\n",ar[m]);
	
	return 0;
}