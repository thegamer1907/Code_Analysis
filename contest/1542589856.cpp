#include<bits/stdc++.h>

using namespace std;

int main()
{

string s;
getline(cin,s);

int n;
scanf("%d",&n);

cin.ignore(10,'\n');

vector<string> ss;

string t;

int pos=0;

for(int i=0;i<n;i++)
{
    t.clear();
    getline(cin,t);
    ss.push_back(t);
    if(t==s){pos=1;}
}

int blah=0;

for(int i=0;i<n;i++)
{
    if(s[0]==ss[i][1]){blah++; break;}
}

for(int i=0;i<n;i++)
{
    if(s[1]==ss[i][0]){blah++; break;}
}

if(blah==2){pos=1;}

if(pos){printf("YES\n");}
else{printf("NO\n");}

return 0;
}
