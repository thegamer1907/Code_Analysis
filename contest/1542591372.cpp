#include <cstdio>
using namespace std;
char s[4],now[4];
bool fst[26],sec[26];
int main(){
	scanf("%s",s);
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%s",now);
		fst[now[0]-'a']=true;
		sec[now[1]-'a']=true;
		if ((sec[s[0]-'a'] && fst[s[1]-'a']))
			return puts("YES"),0;
		if (now[0]==s[0] && now[1]==s[1])
			return puts("YES"),0;
	}
	puts("NO");
}