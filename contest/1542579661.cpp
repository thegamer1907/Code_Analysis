#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,s,t1,t2;

    cin>>h>>m>>s>>t1>>t2;

    h = h*5;
    if (h == 60)
        h = 0;
    t1 = t1*5;
    if (t1 == 60)
        t1 = 0;
    t2 = t2*5;
    if (t2 == 60)
        t2 = 0;
    int cnt = 0;


    for (int i = t1 ; i != t2 ; i = (i+1)%60)
    {
        if (i == h)
            cnt++;
        if (i == m)
            cnt++;
        if (i == s)
            cnt++;
    }

    if(cnt == 0 || cnt == 3)
        cout<<"YES\n";
    else
        cout<<"No\n";

    return 0;
}

//11 55 5 11 1
