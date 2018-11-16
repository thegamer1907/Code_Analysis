#include<bits/stdc++.h>
using namespace std;

void print(int ar[],int n)
{
  for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";
  cout<<endl;  
}
void swap(char *c1,char *c2)
{
  char temp=*c1;
  *c1=*c2;
  *c2=temp;
}

int main()
{
  int n,t;
  cin>>n>>t;
  string s;
  cin>>s;
  
  while(t--)
  {
    int i=0;
    while(i<s.length()-1)
    {
      if(s[i]=='B' && s[i+1]=='G')
      {
        swap(&s[i],&s[i+1]);
        i+=2;
      }
      else
        i++;
    }
  }
  cout<<s;
  
  
}    