#include<cstdio>
#include<iostream>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<stack>
#include<string>
#include<sstream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    h%=12;
    t1%=12;
    t2%=12;
    h*=30;
    t1*=30;
    t2*=30;
    m*=6;
    s*=6;
    if (t1>t2) swap(t1,t2);
    if (h>=t1&&h<t2&&m>=t1&&m<t2&&s>=t1&&s<=t2)
        cout<<"YES";
    else if ((h<t1||h>=t2)&&(m<t1||m>=t2)&&(s<t1||s>t2))
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
