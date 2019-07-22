#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{
int arr[3][10]={};
for(int i=0;i<3;i++)
{
  string x;
  cin>>x;
  int num;
  switch(x[0])
  {
    case '1':
    num=1;
    break;
    case '2':
    num=2;
    break;
    case '3':
    num=3;
    break;
    case '4':
    num=4;
    break;
    case '5':
    num=5;
    break;
    case '6':
    num=6;
    break;
    case '7':
    num=7;
    break;
    case '8':
    num=8;
    break;
    case '9':
    num=9;
    break;
  }
  switch(x[1])
  {
    case 's':
    arr[0][num]=1;
    break;
    case 'm':
    arr[1][num]=1;
    break;
    case 'p':
    arr[2][num]=1;
    break;
  }
}


/*for(int i=0;i<3;i++)
{
  for(int ii=0;ii<=9;ii++)
  {
    cout<<arr[i][ii]<<" ";
  }
  cout<<endl;
}*/






int po=0;
for(int i=0;i<3;i++)
{
 for(int ii=0;i<9;i++)
 {
   if(arr[i][ii]==1)po++;
 }
}
if(po==2)cout<<1;
else if(po==1)cout<<0;
else
{
  int rr=0;
  for(int i=0;i<3;i++)
  {
   for(int ii=0;ii<6;ii++)
   {
     po=0;
     for(int iii=0;iii<3;iii++)
     {
       if(arr[i][ii+iii])po++;
     }
     rr=max(po,rr);
    // if(rr==3)cout<<i<<" "<<ii<<endl;
   }
  }
//cout<<rr<<endl;
  if(rr==3)cout<<0;
  else if(rr==2)cout<<1;
  else cout<<2;
}
    return 0;
}