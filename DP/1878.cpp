#include <bits/stdc++.h>
using namespace std;
int main()
{string a;
cin>>a;int c=0,d=0,e=0;
for(int i=0;i<a.length()-1;)
{
    
    if(a[i]=='A'&&a[i+1]=='B')
{c++;
if(a[i-1]=='B')
e++;
if(e>0)
i+=2;
    else i++;}
else if(a[i]=='B'&&a[i+1]=='A')
{d++;
if(a[i-1]=='A')
e++;
if(e>0)
i+=2;
    else i++;
}

    else i++;
    if(e>0)
{    if(c>1&&d>0||d>1&&c>0)
{cout<<"YES";
exit(0);}}
else if(e==0)
{if(c>0&&d>0)
    {cout<<"YES";
exit(0);}
}
}
cout<<"NO";
return 0;
}