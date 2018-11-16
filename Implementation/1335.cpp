#include <bits/stdc++.h>
#define ll long long
using namespace std;

string fun(int n,string &s)
{
 for(int i=0;i<n-1;)
{
    if(s[i]=='B' && s[i+1]=='G')
    {
        swap(s[i],s[i+1]);
        i+=2;
    }
    else
    {
        i++;
    }

}

return s;
}

int main()
{
int n,t;
cin>>n>>t;
string s;
cin>>s;

while(t>0)
{
    fun(n,s);
    t--;
}

cout<<s;

return 0;
}
