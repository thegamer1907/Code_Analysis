#include<bits/stdc++.h>
using namespace std;
#define int long long
//#define getchar getchar_unlocked
inline void read(int &x)
{
register int c = getchar();
x = 0; int neg = 0;
for(;((c<48 || c>57) && c != '-');
c = getchar());
if(c=='-')
{
neg=1;c=getchar();
}
for(;c>47 && c<58;c = getchar())
{
x = (x<<1) + (x<<3) + c - 48;
}
if(neg) x=-x;
}
main()
{
    string str1,str2,str3=" ";
    cin>>str1;
    int n,i;
    cin>>n;
    int flag=0,flag1=0,flag2=0;
    while(n--)
    {
        cin>>str2;
        if(str2==str1)
        {
            flag=1;
            break;
        }
        else
        {
            if(str2[1]==str1[0])
            flag1=1;
            if(str1[1]==str2[0])
            flag2=1;
        }
    }
    if(flag)cout<<"YES\n";
    else if(flag1&&flag2)cout<<"YES\n";
    else cout<<"NO\n";
}
