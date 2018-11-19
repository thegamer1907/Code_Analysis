#include <bits/stdc++.h>
using namespace std;

#define ms(s, n) memset(s, n, sizeof(s))
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

int main() {
string str;cin>>str;
int n;cin>>n;
string s[n];

int f1 = 0;    

FOR(i,0,n)
{
cin>>s[i];
if(str.compare(s[i])==0)
f1 = 1;
}
if(f1)
{
cout<<"YES";return 0;
}

int l = 0,r = 0;

FOR(i,0,n)
{
if(str[0]==s[i][1])
l = 1;
if(str[1]==s[i][0])
r = 1;
}

if(l&&r)
{
cout<<"YES";return 0;
}
cout<<"NO";
return 0;
}