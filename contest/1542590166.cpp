#include<bits/stdc++.h>
using namespace std;
char arr[100][100][2],n,m;
int main()
{
	scanf("%c%c",&n,&m);
	int num;
	scanf("%d%*c",&num);
	for(int i=0;i<num-1;i++){
		scanf("%c%c%*c",&arr[i][i][0],&arr[i][i][1]);
	}
	scanf("%c%c",&arr[num-1][num-1][0],&arr[num-1][num-1][1]);
	for(int i=0;i<num;i++)
		for(int j=0;j<num;j++){
			if(i!=j){
				arr[i][j][0]=arr[i][i][1];
				arr[i][j][1]=arr[j][j][0];
			}
			else{
				if(n==arr[i][j][1]&&m==arr[i][j][0]){
					printf("YES");
					return 0;
				}
			}
			if(n==arr[i][j][0]&&m==arr[i][j][1]){
				printf("YES");
				return 0;
			}
		}
	printf("NO");
	return 0;
}
