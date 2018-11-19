#include <bits/stdc++.h>
using namespace std;

bool bo[20][20];
int h,m,s,t1,t2;

int nex(int x)
{
    if (x+1>12)
        return 1;
    else
        return x + 1;
}

int pre(int x)
{
    if (x-1<=0)
        return 12;
    else
        return x-1;
}

int main()
{
    //freopen("F:\\rush.txt","r",stdin);
    memset(bo,true,sizeof bo);
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    if (m>0 || s >0)
    {
        bo[nex(h)][h] = false;
        bo[h][nex(h)] = false;
    }else
    {
        bo[nex(h)][h] = false;
        bo[h][nex(h)] = false;
        bo[pre(h)][h] = false;
        bo[h][pre(h)] = false;
    }
    if (s==0)
    {
        if (m%5==0)
        {
            int x = m/5;
            if (x==0) x = 12;
            bo[pre(x)][x] = false;
            bo[x][pre(x)] = false;
            bo[nex(x)][x] = false;
            bo[x][nex(x)] = false;
        }else
        {
            int x = m/5;
            if (x==0) x = 12;
            bo[x][nex(x)] = false;
            bo[nex(x)][x] = false;
        }
    }else
    {
        int x = m/5;
        if (x==0) x = 12;
        bo[x][nex(x)] = false;
        bo[nex(x)][x] = false;
    }

    if (s%5==0)
    {
        int x = s/5;
        if (x==0) x = 12;
        bo[pre(x)][x] = false;
        bo[x][pre(x)] = false;
        bo[x][nex(x)] = false;
        bo[nex(x)][x] = false;
    }else{
        int x = s/5;
        if (x==0) x = 12;
        bo[nex(x)][x] = false;
        bo[x][nex(x)] = false;
    }
    while (bo[t1][pre(t1)])
    {
        t1 = pre(t1);
        if (t1==t2)
            return cout <<"YES"<<endl,0;
    }
    while (bo[t1][nex(t1)])
    {
        t1 = nex(t1);
        if (t1==t2)
            return cout << "YES"<<endl,0;
    }
    cout << "NO"<<endl;
    return 0;
}
