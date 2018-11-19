#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char str[2],str1[101],str2[101];
    cin>>str;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        char str3[3];
        cin>>str3;
        str2[i]=str3[1];
        str1[i]=str3[0];
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(str1[i]==str[0])
        {
            if(flag==1)
            break;
            for(int j=0;j<n;j++)
            {
                if(str2[j]==str[1] && j==i)
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(str2[i]==str[0])
        {
            
            if(flag==1)
            break;
            for(int j=0;j<n;j++)
            {
                if(str1[j]==str[1])
                {
                    
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==1)
    cout<<"YES";
    else
    cout<<"NO";
}