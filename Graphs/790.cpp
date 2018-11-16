#include <stdio.h>
#include <string.h>
int main(){
	int test,time; char queue[100];
	scanf("%d %d", &test,&time);
	scanf("%s",queue);
	for(int i=0;i<time;i++){
		for(int j=0;j<test;j++){
			if(queue[j]=='B'&&queue[j+1]=='G'){
				queue[j]='G';
				queue[j+1]='B';
				j++;
			}
		}
	}
	printf("%s\n",queue );
}