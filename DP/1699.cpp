#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    char s[100010],f[100010];
    int count1=0,count2=0,i,j,u,v,x;
    scanf("%s",s);
    int len=strlen(s);
    for(x=0;x<=len;x++)
    {
        f[x]=s[x];
    }
    if(len<4)
    {
        cout<<"NO"<<endl;
    }
    else if(len>=4)
    {
        for( i=0;i<len;i++)
        {
            if(s[i]=='A'&&s[i+1]=='B')
            {
                count1++;
                s[i]='0';
                s[i+1]='0';
                break;

            }
        }

            for( j=0;j<len;j++)
        {
            if(s[j]=='B'&&s[j+1]=='A')
            {
                count1++;
                break;

            }
        }
        for( v=0;v<len;v++)
        {
            if(f[v]=='B'&&f[v+1]=='A')
            {
                count2++;
                f[v]='0';
                f[v+1]='0';
                break;

            }
        }
         for( u=0;u<len;u++)
        {
            if(f[u]=='A'&&f[u+1]=='B')
            {
                count2++;
                break;

            }
        }
             if(count1==2||count2==2)
    {
        cout<<"YES";
    }
    else if(count1!=2&&count2!=2)
    {
        cout<<"NO";
    }



    }

    return 0;
}