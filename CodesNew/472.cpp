#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
   // int b[n];
    ll sum=0; ll len=0; bool aaya=true; ll omax=0; ll st=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        len++;
       // b[i]=sum; 
        if(sum>k)
        {
            aaya=false;
            
            //len=0;
            while(sum>k)
            {
                sum=(sum-a[st]);
                st++;
                len--;
            }
        } 
        if((len)>omax)
            {
                omax=len;
            }
    } 
    if(aaya)
    {
        cout<<n<<endl;
        return 0;
    }
    cout<<omax<<endl;
   /* int len=0; sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum
    }*/ 
    
    return 0; 
}