#include<bits/stdc++.h>
using namespace std;
int main()
{int n,a=0;
string s;
cin>>s;
cin>>n;
map <int ,int> m;
m[0]=0;
while(a<s.size()-1)
{if(s[a]==s[a+1])
  m[a+1]=m[a]+1;
  else
    m[a+1]=m[a];
  a++;
}
while(n--)
 {int l,r;
cin>>l>>r;
cout<<m[r-1]-m[l-1]<<endl;}
return 0;
}
