#include<bits/stdc++.h>
using namespace std;

void compare(string* s1,string* s2)
{
  string l = *s1;
  string k = *s2;
  string m,n;
  int i=0,j=0;
  while(i<l.length() && i < k.length())
  {
    if((l[i] - 'a') > (k[i]-'a'))
      break;
    if(l[i] == k[i])
      i++;
    if((l[i] - 'a') < (k[i]-'a'))
    {
      k = k.substr(0,i);
    }
  }
  *s2 = k;
  return;
}

int main()
{
  int n,i,j;
  cin>>n;
  string a[n];
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=n-1;i>0;i--)
  {
    compare(&a[i],&a[i-1]);
    if(a[i-1] == "#")
      break;
  }
  for(j=0;j<i;j++)
    cout<<'#'<<endl;
  for(j=i;j<n;j++)
    cout<<a[j]<<endl;
  return 0;
}
