#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int side[2], h, m, s, t1, t2;
void change(int x)
{
    if(x >= t1 && x < t2)
        side[0] = 0;
    else
        side[1] = 0;
}
int main()
{
    //std::ios::sync_with_stdio(0);cin.tie(0);
    cin >> h >> m >> s >> t1 >> t2;
    h = (h == 12) ? 0 : h;
    if(t1 > t2)
        swap(t1, t2);
    side[0] = side[1] = 1;
    change(h), change(m / 5), change(s / 5);
    printf((side[0] || side[1]) ? "YES\n" : "NO\n");
}