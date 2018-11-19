#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int maxn = 100 + 10;
char letter[maxn][3];
int main(){
	//freopen("input.txt", "r", stdin);
	char ts[3];
	int n;
	scanf("%s", ts);
	scanf("%d", &n);
	int flag = 0;
	//printf("%s\n", ts);
	for(int i = 0; i < n; i++){
		scanf("%s", letter[i]);
		//printf("%s\n", letter[i]);
		if(letter[i][0] == ts[0] && letter[i][1] == ts[1]){flag = 1;}
	}
	for(int i = 0; i < n && !flag; i++){
		for(int j = 0; j < n && !flag; j++){
			if(letter[i][1] == ts[0] && letter[j][0] == ts[1]){
				flag = 1;
				break;
			}
		}
	}
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}