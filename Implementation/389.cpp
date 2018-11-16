#include<iostream>
using namespace std;
int main()
{
  int x,y;
  cin>>x>>y;
  int arr[x];
  for(int i=0;i<x;i++)cin>>arr[i];
  int count=0;
  for(int i=0;i<x;i++)
  {
    if(arr[i]==0)break;

    count++;
  }
  if(count<=y){cout<<count;return 0;}
  int z=0;
  for(int i=y;i<x;i++)
  {
    if(arr[i]==arr[y-1])z++;
  }
  cout<<y+z;
}