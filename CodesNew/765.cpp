#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
using namespace std;
int main() {
int n,m;
cin>>n>>m;
set<string>myset;
string s;
for(int i=0;i<n+m;++i){
    cin>>s;
    myset.insert(s);
}
if(n>m){cout<<"YES"<<endl;}
else if(myset.size()%2!=0 && n==m){cout<<"YES"<<endl;}
else {cout<<"NO"<<endl;}
return 0;

}