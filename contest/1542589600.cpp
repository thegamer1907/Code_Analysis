#include <bits/stdc++.h>
using namespace std;
string a[105];
int main()
{ios_base::sync_with_stdio(0);
string s; cin>>s;
int n; cin>>n;
for (int i=0; i<n; i++) cin>>a[i];
for (int i=0; i<n; i++)
{
   if (s==a[i]) {cout<<"YES"; return 0;}
   for (int j=0; j<n; j++)
       if (a[i][0]==s[1] and a[j][1]==s[0]) {cout<<"YES"; return 0;}
}
cout<<"NO";
return 0;}
