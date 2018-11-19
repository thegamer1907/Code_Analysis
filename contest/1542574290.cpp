#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,m,s,t1,t2,ans = 0;
    cin >> h >> m >> s >> t1 >> t2;
    h *= 5;
    m += s/60;
    h += m/60;
    t1 *= 5;
    t2 *= 5;
    if(t1 > t2)
        swap(t1,t2);
    if(t1<h && h<t2)
        ans++;
    if(t1<m && m<t2)
        ans++;
    if(t1<s && s<t2)
        ans++;
    if(ans == 0 || ans == 3)
        puts("YES");
    else
        puts("NO");
    return 0;    
}