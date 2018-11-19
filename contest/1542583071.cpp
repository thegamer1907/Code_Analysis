#include<bits/stdc++.h>
#define int long long
using namespace std;
inline int read()
{
    int n = 0 , c = 0, m;
    while (!isdigit(c)) m = c - 45 ? 1 : -1 , c = getchar();
    while (isdigit(c))  n = n * 10 + c - 48 , c = getchar();
    return m * n;
}
const int N = 1e6 + 1;

main()
{
    int h = read() , m = read() , s = read() , t1 = read() ,  t2 = read();
    int x[5];
    x[0] = 3600 * h + 60 * m + s;
    x[1] = 720 * m  + 12 * s;
    x[2] = 720 * s;
    t1 *= 3600;
    t2 *= 3600;

    for(int i  = 0; i < 3; i ++)
    if(x[i] > 12 * 3600)
        x[i] -= 12 * 3600;

    if(t1 > t2)
        swap(t1 , t2);
    int cnt = 0;
    for(int j = 0; j < 3; j ++){
        if(x[j] >= t1 && x[j] <= t2)
            cnt ++;
    }
    cout <<(cnt == 3 || cnt == 0 ? "YES" : "NO");
}
