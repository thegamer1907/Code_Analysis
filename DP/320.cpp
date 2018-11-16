#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,m,i,j,count=0;
 cin>>n;
 int arrn[n];
 for(i=0;i<n;i++)
  cin>>arrn[i];
 cin>>m;
 int arrm[m];
 for(i=0;i<m;i++)
  cin>>arrm[i];
 sort(arrn,arrn+n);
 sort(arrm,arrm+m);
 i=0,j=0;
 while(i<n && j<m){
    if(arrn[i]==arrm[j] || (arrn[i]-1)==arrm[j] || arrn[i]==(arrm[j]-1)){
      i++;
      j++;
      count++;
    }
    else if(arrn[i]<arrm[j])
      i++;
    else
      j++;
 }
 cout<<count;
 return 0;
}
