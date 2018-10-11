#include<iostream>
#include<cstring>
#include <set>
#include <cmath>
#include <vector>
using namespace std;
set <string> c;
main()
{
int a,b;
cin >>a >>b;
string s;
for(int i=0;i<a+b;i++){
cin >>s;
c.insert(s);}
int x=0;
x=a+b-c.size();
if(x%2==0) {
    if(a>b) cout <<"YES";
    else cout <<"NO";
}
if(x%2==1)
{
    if(a+1>b) cout <<"YES";
    else cout <<"NO";
}

}