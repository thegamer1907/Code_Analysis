#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    int cnt,flag=0;
    cin>>s;
    for(int i=0; i<s.size()-1; i++)
    {
        cnt=1;
        for(int j=i+1; j<s.size(); j++)
        {
            if(s[i]!=s[j])
                break;
            else
                cnt++;
            if(cnt==7)
                flag=1;
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
