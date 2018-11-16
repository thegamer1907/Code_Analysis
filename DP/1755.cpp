#include <bits/stdc++.h>
#define LL long long
#define nod 1000000007
using namespace std;
LL f[10],f1[10];
LL arr[1001000];
LL pe(LL a,LL b)
{
    if(b==0) return 1;
    LL re=1;
    while(b>1)
    {
        if(b%2==0)
        {
            b=b/2;
            a=a*a%nod;
        }
        else
        {
            re=re*a%nod;
            b--;
        }
    }
    //cout <<re*a%nod;
    return re*a%nod;
}

int main()
{
    ios::sync_with_stdio(false);
    string str;
    cin >>str;
    char ch='Q';
    if(str.length()<=3)
    {
        cout <<"NO"<< endl;
        return 0;
    }
    int m=0;
    for(int i=1; i<str.length(); i++)
    {
        int f=0;
        while(str[i]!=str[i-1]&&((str[i]=='A'&&str[i-1]=='B')||(str[i]=='B'&&str[i-1]=='A')))
        {
            if(m!=0)
            {
                cout <<"YES" <<endl;
                return 0;
            }
            f++;
            i++;
        }
         if(f>=4)
            {
                cout <<"YES" <<endl;
                return 0;
            }
        if(f>=2)
        {
            if(ch!='Q')
            {
                cout <<"YES" <<endl;
                return 0;
            }
            m=1;
        }
        else if(f==1)
        {
            if(ch!='Q'&&ch!=str[i-1])
            {
                cout <<"YES" <<endl;
                return 0;
            }
            else ch=str[i-1];
        }
        f=0;
    }
    cout <<"NO"<< endl;
    return 0;
}
