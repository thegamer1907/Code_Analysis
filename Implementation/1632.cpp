#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{char arr[100];
cin>>arr;
int flag=0,count;
for(int i=0;i<strlen(arr);i++)
{count=1;
for(int j=i+1;j<strlen(arr);j++)
 {   if(arr[j]==arr[i])
    count++;
    else {i=j-1;
    break;}
if(count>=7)
    {flag=1;
break;}
    }
    if(flag==1)
    break;
}
if(flag==1)
cout<<"YES";
else cout<<"NO";
return 0;}

