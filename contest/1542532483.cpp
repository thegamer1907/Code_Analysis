#include<bits/stdc++.h>
using namespace std;
int main(){
	char resp[2], teste[100][2];
	int n;
	gets(resp);
	scanf("%d", &n);
	gets(teste[0]);
	for(int i=0; i<n; i++){
		gets(teste[i]);
		if(teste[i][0]==resp[0] && teste[i][1]==resp[1]){
			printf("YES\n");
			return 0;
		}
		else if(teste[i][0]==resp[1] && teste[i][1]==resp[0]){
			printf("YES\n");
			return 0;
		}
	}
	for(int i=0; i<n; i++){
		if(teste[i][0]==resp[1]){
			for(int j=0; j<n; j++){
				if(j==i) continue;
				if(teste[j][1]==resp[0]){
					printf("YES\n");
					return 0;
				}
			}
		}
	}
	printf("NO\n");
	return 0;
}