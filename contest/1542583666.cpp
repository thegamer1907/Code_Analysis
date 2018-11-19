
#include<bits/stdc++.h>
using namespace std;
#define D(x)    cout << #x " = " <<(x) << endl
#define MAX     100000
typedef long long int LL;

vector<int> seq;

int main()
{
    int i, j, n, k, m, v;

    scanf("%d %d", &n, &k);
    for(i = 1; i <= n; i++)
    {
        m = 0;
        for(j = 1; j <= k; j++){
            scanf("%d", &v);
            m += v * (1 << (j - 1));
        }
        seq.push_back(m);
    }


    sort(seq.begin(), seq.end());
    seq.erase(unique(seq.begin(), seq.end()), seq.end());

    for(auto x : seq)
        for(auto y : seq)
            if(!(x & y)){
                puts("YES");
                return 0;
            }

    puts("NO");
    return 0;
}
