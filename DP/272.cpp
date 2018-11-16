#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,k=0;
    cin>>x;
    int a[x];
    for(i=0;i<x;i++)
        cin>>a[i];
    cin>>y;
    int b[y];
    for(j=0;j<y;j++)
        cin>>b[j];
        sort(a,a+x);
        sort(b,b+y);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(abs(a[i]-b[j])<=1){
              k++;
              a[i]=5000;
              b[j]=1000;
        }
        }
    }
    cout<<k;
}