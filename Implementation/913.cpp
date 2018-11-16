#include<cstdio>
#include<iostream>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    char s[300];
    int n,t;
    scanf("%d%d",&n,&t);
    scanf("%s",s);
    for(int j=0; j<t; j++)
    {
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                char c=s[i];
                s[i]=s[i+1];
                s[i+1]=c;
                i++;
            }
            i++;
        }
    }
    printf("%s\n",s);
    return 0;
}