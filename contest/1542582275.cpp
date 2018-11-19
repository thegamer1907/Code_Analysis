
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)

int n,k,flag;
string s[100001];
map<string,int>Map;

void chk(int cur,string s1,string s2 )
{
if(cur==k)
{
if(Map[s1])
flag = 1;
return;
}

if(s2[cur]=='1')
{
s1+='0';
chk(cur+1,s1,s2);
}
else
{
s1+='0';
chk(cur+1,s1,s2);
s1[cur] = '1';
chk(cur+1,s1,s2);
}

}


int main() {
ios_base::sync_with_stdio(0); cin.tie(0);

cin>>n>>k;


FOR(i,0,n)
{
string str = "";   
FOR(j,0,k)
{
char num;cin>>num;
str+=num;
}

s[i] = str;
Map[str] = 1;
}

FOR(i,0,n)
{
string str;
chk(0,str,s[i]);
}
if(flag)
cout<<"YES";
else
cout<<"NO";
return 0;
}