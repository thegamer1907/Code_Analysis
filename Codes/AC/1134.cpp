#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifdef HOME
    chrono::high_resolution_clock::time_point t0 = chrono::high_resolution_clock::now();
#endif
    ios::sync_with_stdio( false );
    cin.tie( nullptr );
    int N, D;
    cin >> N >> D;
    vector<pair<int, int>> A( N );
    for (int i = 0; i < N; ++i)
    {
        int M, S;
        cin >> M >> S;
        A[i] = { M, S };
    }
    sort( A.begin(), A.end() );
    int a = 0, b = 0;
    long long current = 0;
    long long result = 0;
    while (b < N)
    {
        if (A[b].first - A[a].first < D)
        {
            current += A[b].second;
            result = max( result, current );
            ++b;            
        }
        else
        {
            current -= A[a].second;
            ++a;
        }
    }
    cout << result << "\n";
#ifdef HOME
    chrono::high_resolution_clock::time_point t1 = chrono::high_resolution_clock::now();
    cerr << "That took " << chrono::round<chrono::milliseconds>( t1 - t0 ).count() << " ms\n";
#endif
    return 0;
}