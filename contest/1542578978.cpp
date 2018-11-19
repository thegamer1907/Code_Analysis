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
struct st{
    int w[5];
    int cnt;
    int y;
};
st a[N];
bool comp(st a , st b){
    return a.cnt < b.cnt;
}
int used[80];
main()
{
    int n = read() , k = read();
    for(int i = 1; i <= n; i ++){
        int y = 0;
        for(int j = 1; j <= k; j ++){
            int x = read();
            y = (y |(x * (1 << j - 1)));
            a[i].w[j] = x;
            a[i].cnt += x;
        }
        a[i].y = y;
        used[y] ++;
    }
    
    sort(a + 1, a + n + 1 , comp);
    
    for(int i = 1; i <= n; i ++){
        if(a[i].cnt == 0)
            return cout << "YES" , 0;
        if(a[i].cnt == 1){
            int id = -1;
            for(int j = 1; j <= k; j ++){
                if(a[i].w[j] == 1)
                    id = j;
            }

            for(int i = 0; i <= 15; i ++){
                int y = i;
                if(y & (1 << (id - 1))){
                    y ^= (1 << (id - 1));
                }
                if(used[y])
                    return cout << "YES" , 0;
            }
        }
        if(a[i].cnt == 2){
            int id1 = -1, id2 = -1;
            for(int j = 1; j <= k; j ++){
                if(a[i].w[j] == 1){
                    if(id1 == -1){
                        id1 = j - 1;
                        continue;
                    }
                    id2 = j - 1;
                }
            }
            
            for(int i = 0; i <= 15; i ++){
                int y = i;
                if(y & (1 << id1))
                    y ^= (1 << id1);

                if(y & (1 << id2))
                    y ^= (1 << id2);

                if(used[y])
                    return cout << "YES" , 0;
            }
        }
    }
    cout << "NO";
}
