#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>
#include <string>
#include <set>

using namespace std;

typedef long long ll;

const ll MAXN = 1e5 + 2, INF = 9e15, MOD = 1e9 + 7;

ll n, ans, z, k, a, b, x;
bool dog, f[40];
string s1, s2;

int main()
{
    /*ios::sync_with_stdio(0);
    cin.tie(0);*/
    cin >> n >> k;
    z = 1;
    for(int i = 0; i < k; i++)
        z *= 2;
    f[z - 1] = 1;
    for(int i = 0; i < n; i++)
    {
        a = 0;
        b = 1;
        for(int j = 0; j < k; j++)
        {
            cin >> z;
            if(z)
                a += b;
            b*= 2;
        }
        f[a] = 1;
    }
    for(int i = 1; i < 35; i++)
    {

        if(f[i])
        {
            for(int j = 0; j < i; j++)
            {
                if(f[j])
                {
                    z = i;
                    x= j;
                    dog = 0;
                    for(int l = 0; l < k; l++)
                    {
                        if(z % 2 + x % 2 > 1)
                            dog = 1;
                        z /= 2;
                        x /= 2;
                    }
                    if(!dog)
                    {
                        cout << "YES";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO";
    return 0;
}
