#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,k,i,res=0,temp,z=0;
    cin>>n>>m>>k;
    long long int a[m];
    for(i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);
    i=0;
    temp=k;
    while(i<m)
    {
        z=0;
        if(a[i]<=temp)
        {
            res++;
            
            while(a[i]<=temp&&i<m)
            {
                i++;
                z++;
            }    
        }
        if(i<m&&a[i]>temp)
        {
            if(z)
                temp+=z;
            else
            {
                temp+=k;
            }
            
        }
        
    }
    cout<<res<<endl;
}