#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL memo[10005][505];
LL arr[10005];

int main()
{
    string str;
    cin>>str;
    
    int n;
    scanf("%d",&n);
    
    bool flag1=false,flag2=false;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        
        if(temp[1]==str[0])
        {
           flag1=true; 
        }
        
        if(temp[0]==str[1])
        {
           flag2=true; 
        }
        
        if(temp==str)
        {
            flag1=true;
            flag2=true;
        }
    }
    
    if(flag1 && flag2)
    {
        printf("YES\n");
    }
    
    else
    {
        printf("NO\n");
    }
    
}