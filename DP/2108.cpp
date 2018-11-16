#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> A;
vector<int> fenwick;
vector<bool> avai(100001, false);

int get(int l)
{
    int result = 0;
    for (int i = l; i <= n; i += i & (-i))
    {
        result += fenwick[i];
    }

    return result;
}

void initFenwick()
{
    for (int a = n; a > 0; a--)
    {
        if (!avai[A[a]])
        {
            avai[A[a]] = true;

            for (int i = a; i > 0; i -= i & (-i))
            {
                fenwick[i] += 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int m; cin >> n >> m;
    A.resize(n + 1);
    fenwick.resize(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> A[i];

    initFenwick();

    while (m--)
    {
        int l; cin >> l;
        cout << get(l) << "\n";
    }

    return 0;
}
