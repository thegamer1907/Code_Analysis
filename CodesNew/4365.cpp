#include <bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;
string a[n] ;
for(int i=0;i<n;i++)
    cin>>a[i];
string b[n];
b[n-1]=a[n-1];
for(int i=n-1;i>0;i--)
{
for(int j=0;j<min(b[i].size(),a[i-1].size());j++)
{
    if(b[i][j]>a[i-1][j])
    {
        for(int k=j;k<a[i-1].size();k++)
            b[i-1]=b[i-1]+a[i-1][k];
        break;
    }
    if(a[i-1][j]>b[i][j])
        break;
    b[i-1]=b[i-1]+a[i-1][j];
}
}
for(int i=0;i<n;i++)
    cout<<b[i]<<endl;
return 0;
}
