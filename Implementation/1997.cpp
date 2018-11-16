#include<bits/stdc++.h>

#define sci(n) scanf("%d", &n)
#define scii(m, n) scanf("%d %d", &m, &n)
#define sciii(m, n, o) scanf("%d %d %d", &m, &n, &o)

#define rep(i, n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
    int n, x, y, z, sum_x = 0, sum_y = 0, sum_z = 0;
    sci(n);
    rep(i, n)
    {
        sciii(x, y, z);
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    if(!sum_x && !sum_y && !sum_z)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
