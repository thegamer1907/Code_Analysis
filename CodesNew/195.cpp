#include<cstdio>
#include<cstring>
int A[100005],max,c,m,sum,N;
int main(){
	scanf("%d %d",&N,&m);
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	sum=A[0];
	if(sum<=m){
		max++;
	}
 for(int i=0;i<N;i++){
 	if(i-1!=-1){
 		sum=sum-A[i-1];
	 }
 	while(sum+A[c+1]<=m&&c+1<N){
 		sum=sum+A[c+1];
 		c++;
 		if((c-i+1)>max){
 			max=c-i+1;
		 }
	 }
 }
 printf("%d\n",max);
	return 0;
}
