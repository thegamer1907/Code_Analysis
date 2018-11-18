#include<bits/stdc++.h>
using namespace std;
char s[3],pass[3];
int flag1,flag2,flag=0;
int main()
{
    int n;
    flag1=flag2=0;
    scanf("%s",pass);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        scanf("%s",s);
        if(s[0]==pass[0]&&s[1]==pass[1])
        {
            flag=1;
        }
        if(!flag1)
        {
            if(s[1]==pass[0])
                flag1=1;
            if(flag1&&flag2)
            {
                flag=1;
            }
        }
        if(!flag2)
        {
            if(pass[1]==s[0])
                flag2=1;
            if(flag1&&flag2)
            {
                flag=1;
            }


        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
