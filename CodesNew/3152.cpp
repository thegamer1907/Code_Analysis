#include <bits/stdc++.h>

using namespace std;

const int MAXN = 3e5+10;

int num[MAXN], soma[MAXN], n, k;

int busca(int pos)
{
    int ini = pos, fim = n;
    while (ini <= fim)
    {
        int mid = (ini+fim) >> 1;

        if (mid == n && soma[n]-soma[pos-1] <= k) return n;
        else if (mid == n)
        {
            fim = mid-1;
            continue;
        }

        if (soma[mid]-soma[pos-1] <= k && soma[mid+1]-soma[pos-1] <= k) ini = mid+1;
        else if (soma[mid]-soma[pos-1] <= k && soma[mid+1]-soma[pos-1] > k) return mid;
        else if (soma[mid]-soma[pos-1] > k) fim = mid-1;
    }
    return 0;
}

int main(void)
{
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
        soma[i] = soma[i-1];
        if (!num[i]) soma[i]++;
    }

    int ans = 0, ini = 0, fim = 0;
    for (int i = 1; i <= n; i++)
    {
        int pos = busca(i);
        if (pos-i+1 > ans)
        {
            ans = pos-i+1;
            ini = i, fim = pos;
        }
    }

    cout << ans << "\n";

    if (!ans)
    {
        cout << num[1];
        for (int i = 2; i <= n; i++) cout << " " << num[i];
        cout << "\n";
        return 0;
    }

    if (ini == 1) cout << "1";
    else cout << num[1];

    for (int i = 2; i < ini; i++) cout << " " << num[i];
    for (int i = max(2, ini); i <= fim; i++) cout << " 1";
    for (int i = fim+1; i <= n; i++) cout << " " << num[i];
    cout << "\n";
}
