#include <bits/stdc++.h>
using namespace std;

int main() {
int n,t,j=1,flag=1;
cin>>n>>t;
vector<int> a(n);
for(int i=0;i<n;i++)
 cin>>a[i];
while(j<n)
{
    if(j==t)
    {   flag=0;
        cout<<"YES";
        break;
    }
    
    
    j=j+a[j-1];
    
}

if(flag==1)
{
 if (t==n)
  cout<<"YES";
  else
 cout<<"NO";   
}
 
	return 0;
}