#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <queue>
#include <stack>
#include <cmath>
#define ll long long
#define out(a) printf("%d\n",a)
using namespace std;
int n;
char str[250][2],hh[250][2];
int read()
{
	int s=0,t=1; char ch;
	while (ch<'0'||ch>'9'){if (ch=='-') t=-1;ch=getchar();}
	while (ch>='0'&&ch<='9'){s=s*10+ch-'0';ch=getchar();}
	return s*t;
}
int main()
{
	int m;
	scanf("%s",hh);
	n=read(); 
	for (int i=0;i<n;i++) {
	  scanf("%s",str[i]);
	  if (str[i][0]==hh[0][0]&&str[i][1]==hh[0][1]) {
	  	puts("YES");
	  	return 0;
	  }
    }
    m=n;
    n*=2;
    for (int i=m;i<n;i++) {
      for (int j=0;j<2;j++)
      str[i][j]=str[i-m][j];
	}
    //cout<<hh[0][0];
    for (int i=0;i<n;i++) {
      for (int j=0;j<n;j++) {
      	if (i!=j) {
      		//if (i==1&&j==0) {cout<<hh[0][1]; cout<<hh[0][0];}
      		if (str[i][1]==hh[0][0]&&str[j][0]==hh[0][1]) {
      			puts("YES");
      			return 0;
      		}
      	}
      }
  }
    puts("NO");
}
