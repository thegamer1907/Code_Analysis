#include<bits/stdc++.h>
#define pii pair<int, int>
#define endl '\n'
#define pb push_back
#define lli long long int

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, c, d, e;float b, i;
    cin >> a >> b >> c >> d >> e;
    if(a==12) a=0;
    if(c) b+=0.5;
    if(d==12) d=0;
    if(e==12) e=0;
    a = a*5 + ( b ? 1 : 0);
    d*=5;e*=5;
    for(i=d;;i+=0.5)
    {
        if(i==60) i=0;
        if(i==a || i==b || i==c) break;
        if(i==e) cout<<"yeS" <<endl, exit(0);
    }
    for(i=e;;i+=0.5)
    {
        if(i==60) i=0;
        if(i==a || i==b || i==c) break;
        if(i==d) cout<<"yEs" <<endl, exit(0);
    }
    cout<<"nO"<<endl;
    return 0;
}

