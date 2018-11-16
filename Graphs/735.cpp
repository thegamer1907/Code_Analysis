#include<stdio.h>
#include<string.h>

int main(){
	int n, t;
	char antrian[100];
	scanf("%d %d", &n, &t);
		scanf("%s", &antrian);
	
	
	do{
		t--;
		for(int i=0;i<strlen(antrian);i++){
			if(antrian[i+1]  == 'G' && antrian[i] == 'B'){
				antrian[i+1]='B';
				antrian[i]='G';
				i++;
			}
		}
	}while(t > 0);
	
	printf("%s", antrian);
}
