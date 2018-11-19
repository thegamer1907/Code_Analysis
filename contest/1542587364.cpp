#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,a[105];
    int n;
    cin>>s>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    bool f=0,ff=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)ff=f=1;
        if(a[i][0]==s[1])ff=1;
        if(a[i][1]==s[0])f=1;
    }
    puts(f&&ff?"YES":"NO");
}
