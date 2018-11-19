#include<iostream>
using namespace std;
bool b[1000];
int main()
{
    int k, n;
    cin >> k >> n;
    for(int i = 0;i < k; i ++)
    {
        int l = 0;
        for(int j = 0; j < n; j ++)
        {
            int c;
            cin >> c;
            l *= 2;
            l += c;
        }
        b[l] = true;
    }
    for(int i = 0; i < (1 << n); i ++)
    {
        for(int j = 0; j < (1 << n); j ++)
        {
            if(b[i] && b[j])
            {
                bool ok = true;
                for(int l = 0; l < n; l ++)
                {
                    if((i & 1<<l) && (j & 1<<l))
                    {
                        ok = false;
                    }
                }
                if(ok) {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
}
