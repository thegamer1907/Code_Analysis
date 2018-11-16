#include <iostream>
#include <string>
using namespace std;
int main ()
{
int p=0,t=0;
string a,b="0000000";
cin>>a;
p = a.find("1111111");
t = a.find(b);
if (p>(-1) || t>(-1)) {cout<<"YES";}
else {cout<<"NO";}
return 0;
}