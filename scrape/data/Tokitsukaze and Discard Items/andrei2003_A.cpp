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

    long long Curr = Page(A[1]), Series = 0;

    int cnt = 1;

    ans = 1;

    for(int i = 2; i <= M; ++i)
    {
        long long p = Page(A[i] - Series);

        if(Curr == p)
            ++cnt;
        else
        {
            ++ans;

            Series += cnt;

            cnt = 1;

            Curr = Page(A[i] - Series);
        }
    }

    cout << ans << '\n';

    return 0;
}