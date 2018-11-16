#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[101];
    scanf("%s",s);
    int ln=strlen(s);
    int count=0,flag=0,count1=0;
    for(int i=0; i<ln; i++)
    {

        if(s[i]=='1')
        {
            for(int j=i+1; j<i+7; j++)
            {
                if(s[j]=='1')
                {
                    count++;
                }
                else
                    break;

            }
            if(count==6)
            {
                flag=1;
                break;
            }
            count=0;
        }
        else if(s[i]=='0')
        {
            for(int j=i+1; j<i+7; j++)
            {
                if(s[j]=='0')
                {
                    count1++;
                }
                else
                    break;

            }
            if(count1==6)
            {
                flag=1;
                break;
            }
            count1=0;
        }
        if(flag==1) break;
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
