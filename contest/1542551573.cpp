#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int a,b,c;char st[3],m=0;
    cin>>st>>a;
    int ar[2];
    for(b=0;b<2;b++)ar[b]=0;
    char qq[a+1][3];
    for(b=0;b<a;b++)
    {
        cin>>qq[b];
        if(m==0){
        if(strcmp(st,qq[b])==0){m=1;}
        if(st[0]==qq[b][1])ar[0]=1;
        if(st[1]==qq[b][0])ar[1]=1;
        if(ar[0]&&ar[1]){m=1;}
        }
    }
    if(m==1)cout<<"YES";
    else
    cout<<"NO";
}
