#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  char x,y;
  cin>>x>>y;
  int n,temp=0;
  cin>>n;
  char a[n],b[n];
  for(int i=0; i<n; i++)
  cin>>a[i]>>b[i];
  for(int i=0; i<n; i++)
  {
    if(a[i]==x && b[i]==y)
    temp=1;
  }
  sort(a,a+n);
  sort(b,b+n);
  if(binary_search(b,b+n,x))
    if(binary_search(a,a+n,y))
    temp=1;
  if(temp==0)
  cout<<"NO";
  else
  cout<<"YES";
  return 0;
}
