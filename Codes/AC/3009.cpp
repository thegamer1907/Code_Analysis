#include <iostream>
#include <string>
using namespace std;

int pre[1000*1000+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string T;
    cin >> T;
    int n = T.size();
    int k = 0;
    for (int i = 2; i <= n; i++)
    {
        while (k > 0 && T[k] != T[i-1])
        {
            k = pre[k];
        }
        if (T[k] == T[i-1])
        {
            k++;
        }
        pre[i] = k;
    }
    for (int i = 2; i < n; i++)
    {
        if (pre[i] == pre[n] && pre[i])
        {
          for (int j = 0; j < pre[i]; j++) cout << T[j];
          cout << "\n";
          return 0;
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (pre[i] == pre[pre[n]] && pre[i])
        {
            for (int j = 0; j < pre[i]; j++) cout << T[j];
            cout << "\n";
            return 0;
        }
    }

    cout << "Just a legend\n";
  }
