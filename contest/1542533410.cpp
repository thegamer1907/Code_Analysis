#include<iostream>
#include<string>
using namespace std;
main()
{string s;
cin>>s;
int n;
cin>>n;
int y=0;
string a[n];
for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
string tt=a[i]+a[j];
if(tt.find(s)!=-1)y=1;
}
}
if(y==1)cout<<"YES";else cout<<"NO";
}