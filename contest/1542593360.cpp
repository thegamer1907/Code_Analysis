#include<cstdio>
#include<cstring>
using namespace std;
int n,m;char c[2],s[110][2];
bool b1,b2;
int getnum(){int num=0;char c=getchar();
	while(c<48)c=getchar();
	while(c>47)num=(num<<3)+(num<<1)+c-48,c=getchar();return num;
}
inline int max(const int &a,const int &b){if(a>b)return a;return b;}
inline int min(const int &a,const int &b){if(a<b)return a;return b;}
int main(){register int i,j;
	scanf("%s",c);n=getnum();
	for(i=1;i<=n;++i){
		scanf("%s",s[i]);
		if(s[i][0]==c[1])b2=1;
		if(s[i][1]==c[0])b1=1;
		if((s[i][0]==c[0]&&s[i][1]==c[1])||(b1&&b2)){printf("YES");return 0;} 
	}return printf("NO"),0;
}

