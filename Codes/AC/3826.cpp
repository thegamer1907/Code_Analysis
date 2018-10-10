#include <bits/stdc++.h>

using namespace std;

long long r,res=0,l,m,n[3],p[3],h[]={0,0,0};

bool humbs(long long num)
{
    long long x,tempr=r;
    for(int i=0;i<3;i++)
    {
        x=num*h[i];
        if(x>n[i])
        {
            tempr-=(x-n[i])*p[i];
            if(tempr<0)return false;
        }
    }
    return true;
}

int main()
{

    /*ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/

    string s;

    cin>>s;
    cin>>n[0]>>n[1]>>n[2];
    cin>>p[0]>>p[1]>>p[2];
    cin>>r;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B')h[0]++;
        if(s[i]=='S')h[1]++;
        if(s[i]=='C')h[2]++;
    }

    for(l=0,m=1e12;m>1;m=(m&1)+m>>1)
    {
        if(humbs(l+m))
        {
            l+=m;
        }
    }
    if(humbs(l+m))
    {
        l+=m;
    }
    cout<<l<<endl;
    return 0;
}