#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,ar[100000],tr[100000],c=0,x,i,k,j=1,a,sum=0,max1=1,max2=0;
    char s[102];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++){
        if(ar[i]>=ar[k-1]&&ar[i]!=0)
            c++;
    }
    //cout<<k<<endl;
    cout<<c;

}

