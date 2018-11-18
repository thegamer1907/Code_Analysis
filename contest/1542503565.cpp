#include<bits/stdc++.h>
using namespace std;
int n,ok=0;  
char s[10],a[105][10];  
int used[10];    
int main()  
{
    cin>>s>>n; 
    for(int i=0;i<n;i++)  
    {  
        cin>>a[i];
        if(a[i][0]==s[0]&&a[i][1]==s[1]||a[i][0]==s[1]&&a[i][1]==s[0])  
            ok=1;  
        if(s[0]==a[i][0])  
            used[0]=1;  
        if(s[1]==a[i][1])  
            used[1]=1;  
        if(s[0]==a[i][1])  
            used[2]=1;  
        if(s[1]==a[i][0])  
            used[3]=1;  
    }  
    if(used[2]&&used[3])  
        ok=1;  
    if(ok)  
    {  
        cout<<"YES"<<endl;
        return 0;  
    }  
    else  
        cout<<"NO"<<endl;  
    return 0;  
}  