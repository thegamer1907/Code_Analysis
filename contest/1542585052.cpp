#include<cstdio>
#include<cstring>
#include<string> 
#include<algorithm>
#include<cstdlib>
#include<iostream>
using namespace std;
int n;
bool flag;
char key[5];
char str[110][5];
int main()
{
	scanf("%s",key);
	scanf("%d",&n);
	for(int i=1;i<=n;++i) 
	{
	   scanf("%s",str[i]);
	   if(str[i][0]==key[0]&&str[i][1]==key[1]) flag=true;
	   for(int j=1;j<=i;++j){
	    if(str[j][1]==key[0]&&str[i][0]==key[1]) flag=true;
	    else if(str[j][1]==key[0]&&str[i][0]==key[1]) flag=true;
	    else if(str[i][1]==key[0]&&str[j][0]==key[1]) flag=true;
	    } 
	   
    }if(flag) puts("YES");
    else puts("NO");
	return 0;
}

