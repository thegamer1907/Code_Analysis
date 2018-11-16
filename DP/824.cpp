#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, mx = 0;
    cin >> n;
    vector < short int > s(n + 1);
    for (int h = 1; h <= n; h++) cin >> s[h];
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int count = 0;
            for (int it = 1; it < i; it++)
                if (s[it] == 1) count++;
            
            for (int it = i; it <= j; it++)
                if (s[it] == 0) count++;
                
            for (int it = j + 1; it <= n; it++)
                if (s[it] == 1) count++;
                
            mx = max(mx, count);
        }
    }
    cout << mx;
}