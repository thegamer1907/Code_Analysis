#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int main(){
	char answer[3];
	int num;
	scanf("%s", answer);
	scanf("%d", &num);
	bool isTrue = false;

	char ** test = (char**)malloc(sizeof(char*)*num);
	for(int i=0; i<num; i++){
		test[i] = (char*)malloc(sizeof(char)*2);
	}
	for(int i=0; i<num; i++){
		scanf("%s", test[i]);
	}

	for(int i=0; i<num; i++){
		if(strcmp(test[i],answer) == 0){
			isTrue = true;
			break;
		}
	}
	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++){
			if( test[i][1] == answer[0] && test[j][0] == answer[1]){
				isTrue = true;
				break;
			}
		}
	}
	if(isTrue){
		printf("YES");
	}
	else{
		printf("NO");
	}
	getchar();
	getchar();
}