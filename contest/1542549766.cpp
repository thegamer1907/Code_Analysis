#include <stdio.h>

bool fir[26],sec[26];
int main(){
	char pwd[3];
	int n,flag=0;
	scanf("%s %d",pwd,&n);
	for (int i=0;i<n;i++){
		char tmp[3];
		scanf("%s",tmp);
		if (tmp[0]==pwd[0] && tmp[1]==pwd[1]) flag=1;
		fir[tmp[0]-'a']=true;
		sec[tmp[1]-'a']=true;
	}
	if (flag || (fir[pwd[1]-'a'] && sec[pwd[0]-'a'])) printf("YES\n");
	else printf("NO\n");
	return 0;
}
