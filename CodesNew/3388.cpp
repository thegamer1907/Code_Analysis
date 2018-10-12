#include <bits/stdc++.h>
using namespace std;

const int MaxN = 100 + 5, MaxM = 10000 + 5;

int N, M;
int A[MaxN];
priority_queue < int, vector<int>, greater<int> > pq;

int main() {
    cin >> N >> M;
    for ( int i = 1; i <= N; ++i ) cin >> A[i];
    sort( A + 1, A + 1 + N, greater<int>() );
    for ( int i = 1; i <= N; ++i ) pq.push( A[i] );
    for ( int i = 1; i <= M; ++i ) {
        int x = pq.top(); pq.pop();
        pq.push( x + 1 );
    }
    int Max = 0;
    while ( !pq.empty() ) {
        Max = max( Max, pq.top() );
        pq.pop();
    }
    cout << Max << " " << A[1] + M << endl;
    return 0;
}