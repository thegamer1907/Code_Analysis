#include <iostream>
using namespace std;

int main() {

string s;
cin>>s;
int n;
cin>>n;
int f1=0,f2=0,f3=0;;
while(n--)
{
    string k;
    cin>>k;
    if(k==s)
    {
        f1=1;
    }
    if(s[0]==k[1])
    {
        f2=1;
    }
    if(s[1]==k[0])
    {
        f3=1;
    }
}
if(f1==1||(f2==1&&f3==1))
{
    cout<<"YES\n";
}
else cout<<"NO\n";
	return 0;
}
