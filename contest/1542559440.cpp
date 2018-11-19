#include <iostream>
#include <string>
using namespace std;

int main()
{
int n;
string pass;
cin>>pass;
cin>>n;
int f=0;
int s=0;
for(int i=0;i<n;i++)
{
    string tmp;
    cin>>tmp;
    if(tmp==pass)
    {
        cout<<"YES"<<endl; return 0;
    }
    if(tmp[1]==pass[0])
        f=1;
    if(tmp[0]==pass[1])
        s=1;
}
if(f&s)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;

    return 0;
}
