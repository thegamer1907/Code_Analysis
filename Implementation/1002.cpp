#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n,t;
    char s[55];
    while(~scanf("%d %d",&n,&t))
    {
        memset(s,0,sizeof(s));
        scanf("%s",s);
        for(int j=1; j<=t; j++)
            for(int i=n-1; i>0; i--)
            {
                if(s[i]=='G'&&s[i-1]=='B')
                {
                    s[i]='B';
                    s[i-1]='G';
                    i--;
                }
            }
            printf("%s\n",s);
    }
    return 0;
}