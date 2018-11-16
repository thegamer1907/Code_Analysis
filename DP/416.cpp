#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n;
vector<int>a;
vector<int>b;
while(n--){int t;cin>>t;a.push_back(t);}
cin>>m;
while(m--){int t;cin>>t;b.push_back(t);}

sort(a.begin(),a.end());
sort(b.begin(),b.end());
int c=0;
for(int i=0;i<a.size();i++)
{
for(int j=0;j<b.size();j++)
{
if(abs(a[i]-b[j])<=1)
{
    c++;
    a[i]=-500;
   b[j]=-1000;
}
}
}
cout<<c;
return 0;



}
