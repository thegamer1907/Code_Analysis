#include <cstdio>
#include <cmath>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
char s[10];
char s1[300][10];
int n;
bool flag1, flag2;
int main(){
	scanf("%s",s);
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		scanf("%s",s1[i]);
		if(!strcmp(s, s1[i])){
			printf("YES");
			return 0;
		}
		if(s1[i][1] == s[0]) flag1 = 1;
		if(s1[i][0] == s[1]) flag2 = 1;
		if(flag1 && flag2){
			printf("YES");
			return 0;
		}
 	}
	printf("NO");
	return 0;
}
