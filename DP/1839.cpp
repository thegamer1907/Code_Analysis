#include <iostream>
using namespace std;
string a;
int i,x=0,y=0;
int main(){
cin>>a;
for(i=0;i<a.size()-1;i++)
if(a[i]=='A'&&a[i+1]=='B'&&!x) {++x; ++i;}
else if(a[i+1]=='A'&&a[i]=='B'&&x) {++y; ++i;}
if(x&&y) {cout<<"YES"; return 0;}
x=y=0;
for(i=0;i<a.size()-1;i++)
if(a[i+1]=='A'&&a[i]=='B'&&!x) {++x; ++i;}
else if(a[i]=='A'&&a[i+1]=='B'&&x) {++y; ++i;}
if(x&&y) cout<<"YES";
else cout<<"NO";
return 0;
}