#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int maxn =107;
char brr[maxn][3];
int main(){
	char arr[3];
	scanf("%s",arr);
	int n;
	scanf("%d",&n);
	for(int i = 0 ;i < n;i++){
		scanf("%s",brr[i]);
	}
	int flag = 1;
	for(int i =0 ;i < n;i++){
		if(brr[i][0]==arr[0] &&brr[i][1] == arr[1]){
			printf("YES\n");
			return 0;
		}
	}
	for(int i =0 ;i < n;i++){
		if(brr[i][1] == arr[0]){
			for(int j =0 ;j < n;j++){
					if(brr[j][0] == arr[1]){
						printf("YES\n");
						return 0;
				}
			}
		}
	}
	printf("NO\n");
	return 0;
}