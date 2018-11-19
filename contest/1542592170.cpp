#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;
string s[103];
int main()
{//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);
string t;
cin>>t;
int n;
cin>>n;
for (int i=0;i<n;i++) {cin>>s[i];if (s[i]==t) {cout<<"YES";return 0;}}
for (int i=0;i<n;i++)
    {if (s[i][1]==t[0] and s[i][0]==t[1])
    {cout<<"YES";return 0;}}
int g=0,k=0;
for (int i=0;i<n;i++)
{
    if (s[i][0]==t[1]) g++;
    if (s[i][1]==t[0]) k++;
}
if (g and k) {cout<<"YES";return 0;}
cout<<"NO";
 return 0;
}

