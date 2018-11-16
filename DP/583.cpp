#include<bits/stdc++.h>
using namespace std;
int same(char a, char b)
{
    if(a==b) return 1;
    else return 0;
}
int main()
{
    string s;
    cin>>s;
    int n,i,l,j,r,sz=s.size();
    int b[sz];
    b[0]=0;
    for(i=1;i<sz;i++)
    {
        b[i]=b[i-1]+same(s[i-1],s[i]);
    }
    cin>>n;
    for(j=0;j<n;j++)
    {
         cin>>l>>r;
         cout<<b[r-1]-b[l-1]<<endl;

    }

    return 0;
}


