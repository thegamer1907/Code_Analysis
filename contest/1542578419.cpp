#include<cstdio>
#include<cstring>
using namespace std;
int n,k,s[2000];
inline int read(void)
{
	int x=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){ if(ch=='-') f=-1; ch=getchar(); }
    while(ch>='0'&&ch<='9'){ x=x*10+ch-'0'; ch=getchar();}
    return x*f;
}
int main()
{
	n=read();k=read();
	for(int i=1;i<=n;++i){
		int tot=0;
		for(int j=1;j<=k;++j){
			int x=read();
			tot+=x<<j-1;
	    }s[tot]++;
	}
	for(int i=0;i<=15;++i) for(int j=0;j<=15;++j)
	{
		if(s[i]&&s[j]){
			if((i&j)==0){
				puts("YES");
				return 0;
			}
		}
    }puts("NO");
	return 0;
}