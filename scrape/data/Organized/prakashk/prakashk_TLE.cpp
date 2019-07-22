#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n,m,k,j,l;
   cin>>n>>m>>k;
   long long p[m];
   for(long long i=0;i<m;i++)
   cin>>p[i];
   long long count=0;
   if(p[0]%k==0)
   j=p[0]/k;
   else
   j=p[0]/k+1;
   l=j*k;
   int i=0;
   while(i<m)
   {
   	if(p[i]<=l)
   	{int z=0;count++;
   	while(p[i]<=l)
   	{z++;
	i++;
	}
	l+=z;
	}
	else
   		l+=k;
	   }
   
  	cout<<count;
	return 0;
}