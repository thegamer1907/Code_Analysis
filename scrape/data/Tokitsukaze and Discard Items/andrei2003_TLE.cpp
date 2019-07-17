#include <iostream>
#include <climits>

using namespace std;

const int MMAX = 1e5 + 5;

int M, ans = 0;

long long N, A[MMAX], K;

long long Page (long long X)
{
    return (X + K - 1) / K;
}

long long V[MMAX];

int Ind = 1;

int main()
{
    ios_base :: sync_with_stdio(false);

    cin.tie(NULL);

    cin >> N >> M >> K;

    for(int i = 1; i <= M; ++i)
        cin >> A[i];

    while(Ind <= M)
    {
        ++ans;

        for(int i = Ind; i <= M; ++i)
            V[i] = Page(A[i]);

        int cnt = 1;
        long long Min = V[Ind];

        for(int i = Ind + 1; i <= M; ++i)
            if(V[i] == Min)
                ++cnt;
            else
                break;

        for(int i = Ind; i <= M; ++i)
            A[i] -= 1LL * cnt;

        Ind += cnt;
    }

    cout << ans << '\n';

    return 0;
}