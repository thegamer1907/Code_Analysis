#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    int h,m,s,t1,t2;
    cin >> h>>m>>s>>t1>>t2;
    h=(h*5)%60;
    t1=(t1*5)%60;
    t2=(t2*5)%60;
    bool ok=0;
    if(h==t1||h==t2)
    {
        h++;
    }
    if(m==t1||m==t2)
    {
        m++;
    }
    int temp=0;
    for(int i =0; i<=60; i++)
    {
        temp=t1+i;
        temp%=60;
        if(temp==h||temp==m||temp==s)
        {
            break;
        }
        if(temp==t2)
        {
            cout << "YES"<< endl;
            return 0;
        }
    }
    for(int i =0; i<=60; i++)
    {
        temp=t1-i;
        if(temp<0)
            temp+=60;
        if(temp==h||temp==m||temp==s)
        {
            break;
        }
        if(temp==t2)
        {
            cout << "YES"<< endl;
            return 0;
        }
    }
    cout << "NO"<< endl;
    return 0;
}
