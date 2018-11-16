#include<bits/stdc++.h>
using namespace std;
int main()
{string a;
cin>>a;
int x= a.size();
int count=0;
int count2=0;
for(int i=0;i<=x-1;i++)
{if(a[i]=='0'&&a[i+1]=='0'||a[i]=='1'&&a[i+1]=='1')
count++;
else count=0;
if(count==6)
        {count2++;}
}
if(count2>=1)
    cout<<"YES";
else
    cout<<"NO";
}
