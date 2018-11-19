#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cctype>
#define foru(i,x,y) for(int i=x;i<=y;i++)
#define ford(i,x,y) for(int i=x;i>=y;i--)
#define re(x) x=read()
const int inf=1e9;
const int N=1e6+10;
using namespace std;
int n;
char s[200][10],ps[10];
int read(){
	static int x,f;static char ch;
	x=f=0;ch=getchar();
	while(!isdigit(ch)){if(ch=='-')f=1;ch=getchar();}
	while(isdigit(ch)){x=x*10+ch-'0';ch=getchar();}
	return f?-x:x;
}

int main(){
	scanf("%s%d",ps,&n);
	foru(i,1,n){
		scanf("%s",s[i]);
		if(s[i][0]==ps[0]&&s[i][1]==ps[1]){printf("YES\n");return 0;}
	}
	foru(i,1,n){
		foru(j,1,n){
			if(s[i][1]==ps[0]&&s[j][0]==ps[1]){printf("YES\n");return 0;}
		}
	}
	{printf("NO\n");return 0;}
	return 0;
}

