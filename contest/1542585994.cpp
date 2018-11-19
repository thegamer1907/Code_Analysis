#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h, m,s,t1,t2, i;
    cin >> h >> m >> s >> t1 >> t2;
    h*=5;
    h+=m/12;
    h%=60;
    t1*=5;
    t1%=60;
    t2*=5;
    t2%=60;
    for(i=t1; i!=t2; )
    {
        if(i==h || i==m || i==s)
        {
            break;
        }
        i++;
        i%=60;
    }
    if(i==t2)
    {
        cout << "YES";
        return 0;
    }
    for(i=t2; i!=t1; )
    {
        if(i==h || i==m || i==s)
        {
            break;
        }
        i++;
        i%=60;
    }
    if(i==t1)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
