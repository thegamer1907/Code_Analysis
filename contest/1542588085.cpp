#include<cstdio>
typedef long long ll;
inline int read(){
	int x=0,f=1;char ch=getchar();
	for(;ch>'9'||ch<'0';f=ch=='-'?-1:1,ch=getchar());
	for(;ch<='9' &&ch>='0';x=(x<<3)+(x<<1)+ch-'0',ch=getchar());
	return x*f;
}
int main(){
	char sample[3];scanf("%s",sample);
	int T=read();bool fi=0,se=0;
	while(T--){
		char tmp[3];scanf("%s",tmp);
		if(tmp[0]==sample[0]&&tmp[1]==sample[1]){
			puts("YES");return 0;
		}
		if(tmp[1]==sample[0])
			if(se){puts("YES");return 0;}
			else fi=1;
		if(tmp[0]==sample[1])
			if(fi){puts("YES");return 0;}
			else se=1;
	}
	if(fi&&se)puts("YES");
	else puts("NO");
	return 0;
}