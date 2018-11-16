#include <iostream>
using namespace std;
void swap(char &a,char &b)
{ 
  char t=a;
  a=b;
  b=t;
}
int main() 
{
  int t,i;
long long int n;
cin>>n>>t;
char s[n];
cin>>s;
for(int j=0;j<t;j++)
for(i=0;i<n-1;i++)
{
  if((int)s[i+1]>(int)s[i]) 
  { 
    swap(s[i],s[i+1]);
    i++;
  }
}
 cout<<s;
return 0;
}
