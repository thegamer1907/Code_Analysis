#include<bits/stdc++.h>
using namespace std;
int main()
{char a[1000],prev;
cin>>a;
int count=1;
prev=a[0];int flag=0;
for(int i=1;i<strlen(a);i++)
{
if(count>=7)
{flag=1;break;}
if(a[i]==prev)
count++;
else
{count=1;prev=a[i];}
}if(flag||count>=7)cout<<"YES";
else
cout<<"NO";return 0;
}