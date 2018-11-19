#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,flag,flag1,flag2;
    string str[102];
    char pass1,pass2;
    
    cin>>pass1>>pass2;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>str[i];
        
    for(i=0; i<n; i++)
    {
        flag=0,flag1=0,flag2=0;
        for(j=0; j<str[i].size()-1; j++)
        {
            if(str[i][j] == pass1 && str[i][j+1] == pass2)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
        
        
        for(j=0; j<n; j++)
        {
            if(str[j][str[j].size()-1]==pass1){
                flag1=1;        }//cout<<"*";}
            if(str[j][0]==pass2){
                flag2=1;        }//cout<<"$";}
            if(flag1==1 && flag2==1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
}