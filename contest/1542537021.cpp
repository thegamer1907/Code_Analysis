#include<bits/stdc++.h>
using namespace std;
int main()
{
    char key[5];
    int n;
    scanf("%s",key);
    scanf("%d",&n);
    char str[110][5];
    getchar();
    int flag=0;
    for(int i=0; i<n ; ++i)
    {
        scanf("%s",str[i]);
        if((str[i][0]==key[1] && str[i][1]==key[0]) || (str[i][0]==key[0] && str[i][1]==key[1]))
        {
            flag=1;
        }
    }
    if(flag)
    {
        puts("YES");
        return 0;
    }
    for(int i=0; i<n ; ++i)
    {
        for(int j=0; j<n ; ++j)
        {
            if(i==j)
                continue;
            else
            {
                char temp[110];
                strcpy(temp,str[i]);
                strcat(temp,str[j]);
                for(int i=0; temp[i]!='\0' ; ++i)
                {
                    if(key[0]==temp[i] && key[1]==temp[i+1])
                    {
                        puts("YES");
                        return 0;
                    }
                }
            }
        }
    }
    puts("NO");
    return 0;
}
