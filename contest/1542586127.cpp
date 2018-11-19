#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>
#include <string.h>
#include <vector>
#include <cstdio>
#include <map>
#include <set>
#include <queue>
#include <limits.h>
#include <functional>
#define ll long long int
using namespace std;

set <string> have;
vector <string> have2;
string s;
int n;
int main()

{
cin>>s;
cin>>n;
string str;
for(int i=0; i<n; i++)
{
  cin>>str;
  have.insert(str);
  have2.push_back(str);
}

int i=0;
bool works = false;
bool doneloop = false;
for(int j=0; j<have2.size(); j++)
{

if(s[i] == have2[j][0] && s[i+1]==have2[j][1])
{
    i+=2;

    doneloop=true;
    works= true;
    break;

}
}

if(!doneloop)
for(int j=0; j<have2.size(); j++)
{
//cout<<s[i]<<" "<<have2[j][1]<<endl;
if(s[i]==have2[j][1])
{//cout<<"SA"<<endl;
    i++;

    doneloop=true;
    works=true;
    break;

}
}
//cout<<" W "<<works<<endl;
if(!works)
{
    puts("NO");
    return 0;
}
int sz= s.length();
bool donewhile = false;
//cout<<"I"<<i<<endl;
while(i<sz)
{
string x = s.substr(i,2);
for(int j=0; j<have2.size(); j++)
{
    //cout<<s[i]<<" "<<have2[j][0]<<endl;
if(s[i]==have2[j][0] && i==sz-1)
{
   donewhile = true;
   break;
}
}
if(donewhile)
    break;

if(!have.count(x) || i==n-1)
{
    puts("NO");
    return 0;
}
i+=2;
}

cout<<"YES"<<endl;
}
