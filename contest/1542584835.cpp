#include<bits/stdc++.h>
using namespace std;
char str[105][5];
int main()
{
    char s[5];
    while(scanf("%s",s)==1)
    {
        int N;
        scanf("%d",&N);
        for(int i=0;i<N;i++)
            scanf("%s",str[i]);
        bool flag=false;
        for(int i=0;i<N;i++)
            {
                for(int j=0;j<N;j++)
                {
                    if(str[i][1]==s[0]&&str[j][0]==s[1])
                    {
                    flag=true;
                    }
                }
                if(str[i][0]==s[0]&&str[i][1]==s[1])
                    flag=true;
            }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
