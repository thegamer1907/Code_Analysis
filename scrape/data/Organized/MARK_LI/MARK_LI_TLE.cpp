#pragma GCC optimize("Ofast")
#include <iostream>
#include <cstdio>
using namespace std;
inline int read()
{
    int x=0,f=1;
    char ch;
    while(ch<'0'||ch>'9')  {if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return f*x;
}
int n,m,k;
int a[100005];
int ans=0;

int main()

{
	n=read();m=read();k=read();
	for (int i=1;i<=m;i++){
		a[i]=read();
	}

	for (int i=1;i<=m;i++){
		ans++;
		int cnt=0;
		for (;i<=m;i++){
			cnt++;
			if ((a[i]-1)/k!=(a[i+1]-1)/k) break;
		}
		for (int j=i+1;j<=m;j++){
			a[j]-=cnt;
		}
	}

	cout<<ans<<endl;
	return 0;
}