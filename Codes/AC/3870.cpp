#include <iostream>
#include <string>

using namespace std;

long long nb, ns, nc;
long long pb, ps, pc;
long long r;

long long tb, ts, tc;

bool possible(long long h) {
    long long cost_b = max(0ll, (tb * h - nb) * pb);
    long long cost_s = max(0ll, (ts * h - ns) * ps);
    long long cost_c = max(0ll, (tc * h - nc) * pc);

    return cost_b + cost_s + cost_c <= r;
}

long long max_possible() {
    long long l = 0, r = 1e14;

    while (l < r) {
        long long m = (l + r) / 2;

        if (possible(m)) {
            l = m + 1;
        } else {
            r = m;
        }
    }

    return l - 1;
}

int main() {
    string recipe;
    cin >> recipe;

for(int i=0;i<recipe.size();i++)
{
    if(recipe[i]=='B')
    {
        tb++;}
    if(recipe[i]=='S')
    {
        ts++;}
    if(recipe[i]=='C')
    {
        tc++;}
}
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;

    cout << max_possible() << endl;
}