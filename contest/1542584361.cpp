#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
inline int in(){
    int x=0;bool f=0; char c;
    for (;(c=getchar())<'0'||c>'9';f=c=='-');
    for (x=c-'0';(c=getchar())>='0'&&c<='9';x=(x<<3)+(x<<1)+c-'0');
    return f?-x:x;
}
char ch[2],s[102][2];
int n;
int main()
{
	scanf("%s",ch);n=in();
	for (int i=1;i<=n;++i){
		scanf("%s",s[i]);
		if (s[i][0]==ch[0]&&s[i][1]==ch[1]) {printf("YES");return 0;}
	}
	for (int i=1;i<=n;++i)
	for (int j=1;j<=n;++j)
	if (s[i][1]==ch[0]&&s[j][0]==ch[1]){printf("YES");return 0;}
	printf("NO");return 0;
}