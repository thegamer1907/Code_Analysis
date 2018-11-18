#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,j,k,count=0,count1=0;
string str,str1[n],str2;

cin>>str;
cin>>n;

for(i=0;i<n;i++)
{
cin>>str1[i];
}

for(i=0;i<n;i++)
{
if(str==str1[i])
count++;
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(str[0]==str1[i][1] && str[1]==str1[j][0])
count1++;
}
}

if(count1!=0 || count!=0)
printf("YES");
else
printf("NO");
}