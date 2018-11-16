#include<bits/stdc++.h>
using namespace std;
int Arr[100007], Jum[100007];
bool sudah[100007];

int main()
{
    int n, m;
    cin>> n >> m;

    for(int i = 1; i <= n; i++)
        cin>> Arr[i];

    int banyak = 0;
    for(int i = n; i > 0; i--)
    {
        if(!sudah[Arr[i]])
        {
            banyak++;
            sudah[Arr[i]] = true;
        }
        Jum[i] = banyak;
    }

    for(int i = 1; i <= m; i++)
    {
        int t;
        cin>> t;

        cout<< Jum[t] << "\n";
    }
}
