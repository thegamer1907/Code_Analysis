#include <bits/stdc++.h>
using namespace std;
int main() {
long long int n,m,l,x,i,q=0;
string s;
cin>>s;
n=s.length();
int p[n+1];
p[1]=0;
for(int k=0;k<n;k++)
{
    if(s[k]==s[k-1])
       q++;
    p[k+1]=q;
}
cin>>m;
int a,b;
for(int i=0;i<m;i++){
	cin>>a;
	cin>>b;
cout<<(p[b]-p[a])<<endl;
}
 return 0;
}