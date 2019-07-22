#include <iostream>
#include <math.h>

using namespace std;
#define ll unsigned long long
#define M 100005
ll m, n, k;
ll p[M];
ll res = 0;

void execute()
{
    ll num_del = 0, pag = 1;
    ll cur_pos, cur_pag;
    ll fix_max_pos;
    int i = 1;
    while (i <= m)
    {
        ll num_del_tmp = num_del;
        cur_pos = p[i] - num_del;
        cur_pag = (ll) ceil (1.0 * cur_pos / k);
        fix_max_pos = cur_pag * k;
        while (p[i] - num_del_tmp <= fix_max_pos) 
        {
            num_del += 1;
            i += 1;
        }
        res += 1;
    }
}
int main() 
{
 //   freopen("input.txt", "r", stdin);
    
    cin >> n >> m >> k;
    for (int i = 1; i <= m ; i++)
        cin >> p[i];
    execute();
    cout << res;
    return 0;
}