#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[300005];
    int len,i,flag=0,c1=0,c2=0;
    cin>>str;
    len = strlen(str);
    
    for(i=0;i<len-1;i++)
    {
        if(str[i]=='A' && str[i+1]=='B')
        {
            c1++;
        }
    }
    for(i=0;i<len;i++)
    {
        if(str[i]=='B' && str[i+1]=='A')
        {
            c2++;
        }
    }
    if(c1>=2 && c2>=2)
    cout<<"YES"<<endl;
    else if(c1==1 && c2==1)
    {
        flag=0;
        for(i=0;i<len-2;i++)
        {
            if((str[i]=='A' && str[i+1] == 'B' && str[i+2] == 'A')||(str[i]=='B' && str[i+1] == 'A' && str[i+2] == 'B'))
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    else if(c1==2 && c2==1)
    {
        flag=0;
        for(i=0;i<len-3;i++)
        {
            if((str[i]=='A' && str[i+1] == 'B' && str[i+2] == 'A' && str[i+3] == 'B'))
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    else if(c1==1 && c2==2)
    {
        flag=0;
        for(i=0;i<len-3;i++)
        {
            if((str[i]=='B' && str[i+1] == 'A' && str[i+2] == 'B' && str[i+3] == 'A'))
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    else if(c1>2 && c2==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}