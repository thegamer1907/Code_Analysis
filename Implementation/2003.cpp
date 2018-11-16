
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    long sum1=0,sum2=0,sum3=0;
    while(n--)
    {
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        sum1+=n1;
        sum2+=n2;
        sum3+=n3;     
    }
    
    if( (sum1==0) && (sum2==0)&&(sum3==0) )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    
    
    
}