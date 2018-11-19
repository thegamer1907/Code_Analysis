#include <cstdio>
#include <cstring>
char pw[3], s[100][3];
int n, cnt1 = 0, cnt2 = 0;
int tmp1, tmp2;
int main (){
	scanf("%s", pw);
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%s", s[i]);
		if (strcmp(pw, s[i]) == 0){
			 printf("YES\n");
			 return 0;
		}
	}
	for (int i = 0; i < n; i++){
		if (s[i][1] == pw[0])
			cnt1++;
		if (s[i][0] == pw[1])
			cnt2++;
	}
	if (cnt1 == 0 || cnt2 == 0)
		printf("NO\n");
	else 
		printf("YES\n");
	return 0;
}