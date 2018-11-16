#include<iostream>
using namespace std;
int main()

{
int sumx=0,sumy=0,sumz=0;
int n;
cin>>n;
int a[n][3];
for(int i=0;i<n;i++)
{
for(int j=0;j<3;j++)
cin>>a[i][j];
}


for(int j=0;j<n;j++)
{
sumx+=a[j][0];
sumy+=a[j][1];
sumz+=a[j][2];
}



if(sumx==0&&sumy==0&&sumz==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

return 0;
}
