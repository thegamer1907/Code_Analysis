#include <bits/stdc++.h>

using namespace std;

bool exist[100005];

int power(int x , int y)
{
    int f = 1;
    while(y--)
        f *= x;
    return f;
}


//bool vis[62];

int main()
{
    int n , k;
    scanf("%d%d" , &n , &k);
    if(n == 1)
    {
        int x , res = 0;
        for(int u=k-1 ; u>=0 ; u--)
        {
            scanf("%d" , &x);
            res += x*power(2,u);
        }
        if(res == 0)
            return cout << "YES" , 0;
        else
            return cout << "NO" , 0;
    }
    bool can = false;
    int len = power(2,k);
    for(int i=0 ; i<n ; i++)
    {
        int x , res = 0;
        for(int u=k-1 ; u>=0 ; u--)
        {
            scanf("%d" , &x);
            res += x*power(2,u);
            /*x = !x;
            nres += x*power(2,i);*/
        }
        for(int j=0 ; j<len ; j++)
        {
            int Xor = j&res;
            if(Xor == 0  &&  exist[j])
            {
                can = true;
                break;
            }
        }
        exist[res] = true;
    }
    if(can)
        cout << "YES";
    else
        cout << "NO";
    /*string pas;
    cin >> pas;
    int n;
    cin >> n;
    bool st = false , nd = false;
    while(n--)
    {
        string a;
        cin >> a;
        if(a == pas)
            st = nd = true;
        if(pas[0] == a[1])
            st = true;
        if(pas[1] == a[0])
            nd = true;
    }
    if(st && nd)
        cout << "YES";
    else
        cout << "NO";*/
    /*int h , m , s , t1 , t2;
    cin >> h >> m >> s >> t1 >> t2;
    if(h == 12)
        vis[0] = true;
    else
        vis[h*5] = true;
    vis[m] = vis[s] = true;
    if(t1 == 12)
        t1 = 0;
    else
        t1 = t1*5;
    if(t2 == 12)
        t2 = 0;
    else
        t2 = t2*5;
    for(int t=t1 ;  ; t = (t+1)%60)
    {
        if(t == t2)
            return cout << "YES" , 0;
        if(vis[t])
            break;
    }
    for(int t=t2 ;  ; t = (t+1)%60)
    {
        if(t == t1)
            return cout << "YES" , 0;
        if(vis[t])
            return cout << "NO" , 0;
    }*/
    return 0;
}
