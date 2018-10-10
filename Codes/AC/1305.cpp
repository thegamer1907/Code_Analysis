#include <bits/stdc++.h>
using namespace std;
set<string> cc;
int main() {
string st;int a,b,c;cin>>a>>b;
for (c=1; c<=a+b; c++)cin>>st,cc.insert(st);c=a+b-cc.size();
if((c%2 && b<=a) || a>b) cout<<"YES"; else cout<<"NO";}
