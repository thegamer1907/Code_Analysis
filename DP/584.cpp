#include<bits/stdc++.h>
using namespace std;
 int m,l,r,arr[100005];
int diff(char aa,char bb)
{
    if(aa==bb)
    return 1;
    return 0;
}
int main()
{ 
char a[100005];
cin>>a>>m;
arr[0]=0;
for(int i=1;a[i]!='\0';i++)
        arr[i]=arr[i-1]+diff(a[i-1],a[i]);
while(m--)
{
    cin>>l>>r;
cout<<arr[r-1]-arr[l-1]<<endl;
}
    return 0;
}