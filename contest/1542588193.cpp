#include <iostream>
#include <cmath>
using namespace std;
    string s;
    int n,a[2];
int main()
{
    cin>>s>>n;
    string x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(s[0]==x[1])a[0]++;
        if(s[1]==x[0])a[1]++;
        if(s[0]==x[0] && s[1]==x[1]){cout<<"YES";return 0;}
        if(a[0]>0 && a[1]>0){cout<<"YES";return 0;}
    }
    cout<<"NO";
        return 0;
}
