#include <bits/stdc++.h>
#define int long long int
using namespace std;

#undef int
int main() 
{
#define int long long int
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    cin>>str;
    int b, s, c;
    cin>>b>>s>>c;
    int pb, ps, pc;
    cin>>pb>>ps>>pc;
    int r;
    cin>>r;
    int bb = 0, ss = 0, cc = 0;
    for(int i = 0; i<str.length();i++)
    {
        bb+=str[i]=='B';
        ss+=str[i]=='S';
        cc+=str[i]=='C';
    }
    int l = 0, h = 1e12+1000, m;
    while(h-l>1)
    {
        m = l+(h-l)/2;
        int p = max(0ll, bb*m-b)*pb+max(0ll, ss*m-s)*ps+max(0ll, cc*m-c)*pc;
        //cout<<p<<endl;
        if(p<=r)
            l = m;
        else
            h = m;
    }
    cout<<l<<endl;


    return 0;
}   