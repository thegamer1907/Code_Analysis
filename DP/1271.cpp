#include <bits/stdc++.h>
using namespace std;

#define test() freopen("inp.txt", "r", stdin)
#define logger(x) cerr << " ~~> " << #x << " = " << (x) << endl
#define loop(i, n) for(int (i)=0; (i)<(n); (i)++)
#define finish(x) {cout << (x) << "\n"; exit(0);}
typedef long long ll;

const int mxn = 1.e3;
int n, a[mxn];

int find_mx_sum()
{
    int ta_inja = 0, ta_tah = INT_MIN;
    loop(i, n)
    {
        ta_inja += a[i];
        if(ta_inja > ta_tah)
            ta_tah = ta_inja;
        if(ta_inja < 0)
            ta_inja = 0;
    }
    return ta_tah;
}

int main()
{
    int x, sum = 0;
    cin >> n;
    loop(i, n)
    {
        cin >> x;
        sum += x;
        a[i] = x ? -1: 1;
    }
    sum += find_mx_sum();
    finish(sum);
}
