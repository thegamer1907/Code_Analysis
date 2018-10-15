#include<iostream>
#include<algorithm>
using namespace std;
int a,b,c,d,i,e,f,g,n,m,k,l,A[500005];
int main()
{
           cin>>n;
           for(i=0;i<n;i++)
           cin>>A[i];
           sort(A,A+n);
           for(i=0;i<n;i++) 
           {
           if(A[i]>=2*A[k]) k++;
           //cout<<k<<" "<<A[i]<<" "<<2*A[k]<<endl;
           }
           cout<<n-min(k,n/2);
}