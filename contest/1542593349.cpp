#include <cstdio>
#include <cstdlib>
#include <algorithm>
#define N 100001
using namespace std;
int n;
char str[3];
char str_pass[N][3];
int main(){
	bool check = false;
	scanf("%s",str);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%s",str_pass[i]);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(str_pass[i][1] == str[0] && str_pass[j][0] == str[1])check = true;
		}
	}
	for(int i=1;i<=n;i++){
		if(str_pass[i][0] == str[0] && str_pass[i][1] == str[1])check = true;
	}
	if(check)printf("YES\n");
	else printf("NO\n");
	return 0;
}