#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
int n,k;
bool check(int x)
{
  int sum=0;
  while (x>0) sum+=x%10,x=x/10;
  return (sum==10);
}
int main()
{
  scanf("%d",&k);
  int now=0;
  while (k)
  {
  	now++;
  	if (check(now)) k--;
  }
  cout<<now<<endl;
  return 0;
}