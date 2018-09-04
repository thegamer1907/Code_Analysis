#include <bits/stdc++.h>

using namespace std;

int N, K;
string S;

int calc( char x )
{
    int result = 0;
    int changes = 0, a = 0, b = 0;
    while (b < N)
    {
        if (S[b] == x)
        {
            result = max( result, b - a + 1 );
            ++b;
        }
        else if (changes == K)
        {
            while (S[a] == x)
                ++a;
            ++a;
            ++b;
        }
        else
        {
            ++changes;
            result = max( result, b - a + 1 );
            ++b;
        }
    }
    return result;
}

int main()
{
#ifdef HOME
    chrono::high_resolution_clock::time_point t0 = chrono::high_resolution_clock::now();
#endif
    ios::sync_with_stdio( false );
    cin.tie( nullptr );
    cin >> N >> K >> S;
    int result = max(calc('a'), calc('b'));
    cout << result << '\n';
#ifdef HOME
    chrono::high_resolution_clock::time_point t1 = chrono::high_resolution_clock::now();
    cerr << "That took " << chrono::round<chrono::milliseconds>( t1 - t0 ).count() << " ms\n";
#endif
    return 0;
}