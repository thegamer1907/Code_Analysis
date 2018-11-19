#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;


main(){
#ifndef ONLINE_JUDGE
freopen("in","r",stdin);
//freopen("out","w",stdout);
#endif
bool ans=false;
string s;
int n;
cin>>s>>n;
string r[n];
for(int i =0 ; i<n ; i++)
cin>>r[i];

for(int i =0 ; i<n ; i++)
for(int j =0 ; j<n ; j++)
if((r[i][0]==s[0] && r[i][1]==s[1])||(r[i][1]==s[0] && r[j][0]==s[1]) || (r[j][1]==s[0] && r[i][0]==s[1]))
ans=true;

cout<<((ans)?"YES":"NO");


}