#include <bits/stdc++.h>
using namespace std;
int main()
{
    long N, M; scanf("%li %li", &N, &M);
    set<string> pol, en, com;
    string s0; getchar();
    for (long i = 0; i < N; ++i)
    {
        getline(cin, s0);
        pol.insert(s0);
    }
    for (long i = 0; i < M; ++i)
    {
        getline(cin, s0);
        if (pol.count(s0))
        {
            pol.erase(s0);
            com.insert(s0);
        }
        else en.insert(s0);
    }
    long P = pol.size(), E = en.size(),
    C = com.size();
    puts(P - (E - C % 2) > 0 ? "YES" : "NO");
}
