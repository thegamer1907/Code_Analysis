#include <iostream>
#include <set>

using namespace std;

int n;
bool pl['z'+1],ul['z'+1],test1,test2;
string s,p;
set<string> b;

int main()
{
    cin>>p>>n;
    for(int i=1;i<=n;i++){
      cin>>s;
      b.insert(s);
      pl[s[0]]=ul[s[1]]=true;
    }
    test1=true;
    for(int i=0;i<p.size();i+=2){
      if(i==p.size()-1){
        if(not pl[p[i]])test1=false;
      } else {
        if(b.find(p.substr(i,2))==b.end())test1=false;
      }
    }
    if(ul[p[0]])test2=true; else test2=false;
    for(int i=1;i<p.size();i+=2){
      if(i==p.size()-1){
        if(not pl[p[i]])test2=false;
      } else {
        if(b.find(p.substr(i,2))==b.end())test2=false;
      }
    }
    if(test1||test2)cout<<"YES";
    else cout<<"NO";
    return 0;
}
