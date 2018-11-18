#include<cstdio>

char todo[11], s[111][11];
int n;

int main() {
	scanf("%s", todo);
	scanf("%d", &n);
	for(int i=0;i<n;i++) {
		scanf("%s", s[i]);
		if (s[i][0]==todo[0] && s[i][1]==todo[1]) {
			puts("YES");
			return 0;
		}
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++) {
			if(s[i][1]==todo[0] && s[j][0]==todo[1]) {
				puts("YES");
				return 0;
			}
		}
	puts("NO");
	
	return 0;
}