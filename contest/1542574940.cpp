#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <ctime>
#include <map>
#include <queue>
#include <cstdlib>
#include <string>
#include <climits>
#include <set>
#include <vector>
using namespace std;
inline int read(){
	int k=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){k=k*10+ch-'0';ch=getchar();}
	return k*f;
}
int a[110];
int main()
{
	int n=read(),m=read();
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int i=1;i<=m;i++)sum=sum*2+read();
		a[sum]=1;
	}
	for(int i=0;i<=100;i++)
		for(int j=0;j<=100;j++)if((i&j)==0&&a[i]&&a[j])return puts("YES")&0;
	puts("NO");
}