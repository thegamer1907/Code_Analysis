#include<iostream>
using namespace std;
#define maxn 100000+5
long long arr[maxn];
int main()
{
long long n,m,k;
cin>>n>>m>>k;
for(int i=0;i<m;i++) 
{cin>>arr[i];
//arr[i]--;
}
long long op=0,i=0,c=0;
while(i<m)
{
      op++;
       long long x=(arr[c]-c)%k;
       if(x!=0)
       x=k-x;
     //  cout<<x<<endl;
 
      while(arr[i]<=arr[c]+x && i<m)
       {
           i++;
 
       }
       c=i;
}
cout<<op<<endl;
return 0;
}